class cricket:
    name = []
    team = []
    run = []
    ball = []
    cnt = 0

    def players(self,x):
        self.cnt=x

    def enter(self,name,team,run,ball):
        self.name.append(name)
        self.team.append(team)
        self.run.append(run)
        self.ball.append(ball)

    def display(self):
        for i in range(0,self.cnt):
            print(self.name[i],end=' ')
            print("of team ",end=' ')
            print(self.team[i],end=' ')
            print(" scored ",end=' ')
            print(self.run[i],end=' ')
            print(" run in ",end=' ')
            print(self.ball[i],end=' ')
            print(" ball.\n")

z=int(input("enter the number of player - "))
cr=cricket()
cr.players(z)
i=1
while z>0 :
    a=input("enter the name of player{}=".format(i))
    b=input("enter the team of player as(A or B)=")
    c=int(input("enter the score of the player="))
    d=int(input("enter the balls="))
    cr.enter(a,b,c,d)
    i=i+1
    z=z-1
cr.display()   
