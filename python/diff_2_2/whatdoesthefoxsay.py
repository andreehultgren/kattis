def main():
    not_allowed_sounds  =   []
    n_cases             =   int(input())
    
    for _ in range(n_cases):
        sounds = input().split(' ')
        while True:
            data = input()
            if data == "what does the fox say?":
                break
            not_allowed_sounds.append(data.split(' ')[2])
        for index, sound in enumerate(sounds):
            if sound in not_allowed_sounds:
                sounds[index]="del"
        while "del" in sounds:
            sounds.remove('del')
        line = ""
        for m in sounds:
            line += m+" "
        print(line[:-1])

if __name__ == '__main__':
    main()