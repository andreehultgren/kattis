# Set up for the solution
data        =   [int(s) for s in input().split(" ")]
data        =   data[1:]
converged   =   False
order       =   0
carry_value =   0
data_stacks =   []

# Save initial data
data_stacks.append(data)

# Loop until the changerate is static
while not converged:
    # Compute change between elements
    new_data    =   []
    for i in range(len(data)-1):
        new_data.append(data[i+1]-data[i])    

    # Check if we have converged to a value
    converged   =   new_data.count(new_data[-1]) == len(new_data)

    # Update metadata
    order       +=  1
    data        =   new_data

    # Save layer
    data_stacks.append(data)

# Loop back to initial data
for data_layer in data_stacks[::-1]:
    # Add the changerate value to the layer before
    data_layer.append(data_layer[-1]+carry_value)
    carry_value     =   data_layer[-1]

print(order, data_stacks[0][-1]) 
