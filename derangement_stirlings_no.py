# derangeent problem -- recurrence relation -> D(n) = (n-1)*(D(n-1) + D(n-2))  
# coat party problem - no of ways no two man get same coat 
def derange(n):
    l=[0]*(n+1)
    l[2]=1
    for i in range(3,n+1):
        l[i]=(i-1)*(l[i-1]+l[i-2]);
    return l[n];

print(derange(4))

#stirlings no. of second kind ---> recurrence relation -> S(n,k) = k*(S(n-1,k)) + S(n-1,k)
# n object are placed in k boxes using paritioning
def  S(n,k):
    if(n==0 or n==0 or k>n):
        return 0
    if(k==1 or k==n):
        return 1
    return k*(S(n-1,k))+S(n-1,k-1)

print(S(3,2))

def S(n,k):
    dp=[[0 for i in range(k+1)] for j in range(n+1)]
    # Base Cases
    for i in range(n+1):
        dp[i][0]=0
    for i in range(k+1):
        dp[0][k]=0
    # Fill rest of the entries in dp[][] in bottom up manner
    for i in range(n+1):
        for j in range(k+1):
            if j==1 or i==j:
                dp[i][j]=1
            else:
                dp[i][j]=j*dp[i-1][j] + dp[i-1][j-1]
    return dp[n][k]
print(S(3,2))
