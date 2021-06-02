# Collect data
n_planets   =   int(input())
planet_data =   tuple(
    tuple(
        int(s) for s in input().split(" ")
    ) for _ in range(n_planets)
)
# Compute years until extinction
for population, growth_multiplier, food_production in planet_data:
    n_years     =   0
    while population <= food_production:
        population *= growth_multiplier
        n_years += 1
    print(n_years)
