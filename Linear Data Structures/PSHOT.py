for _ in range(int(input())):
    N = int(input())
    timeline = input()
    ascore, bscore  = 0, 0
    arem, brem, sol = N, N, 2 * N
    for i in range(2 * N):
        if i % 2 == 0:
            if timeline[i] == '1':
                ascore += 1
            arem -= 1
        else:
            if timeline[i] == '1':
                bscore += 1
            brem -= 1
            
        if (ascore > (bscore + brem)) or  (bscore > (ascore + arem)):
            sol = (i+1)
            break
        
        #print("Ascore:",ascore,"Bscore+brem:",bscore + brem)
        #print("Bscore:",bscore,"Ascore+Arem:",ascore + arem)
    print(sol)