def miniPatches(S):
    potHoles = {}
    for i, segment in enumerate(S):
        if segment != 'X':
            continue
        if (i-1 in potHoles) or (i-2) in potHoles:
            continue
        potHoles[i] = 1
    return sum(potHoles.values())

if __name__ == '__main__':
    Ss = ['.X..X', 'X.XXXXX.X', 'XX.XXX', 'XXX.']
    for S in Ss:
        print(miniPatches(S))
