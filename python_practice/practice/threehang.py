k=3
print(k) if k<4 else print('hi')

I='my name is dh'
print(I) if len(I) <= 10 else print ('too long')

J=4

# J<5 ? print(J) : print("no J") 이런식으로는 못쓴다네요

# 삼항 연산자를 이렇게 쓴다네요 음 편한듯? 원래라면
"""
int k=3
int hi =(k<4) ? printf("%d",k) : printf("hi");
C언어는 이렇게해야함;

아니면 
if(k<4) {printf("%d",k);}else{print("hi");}

"""


