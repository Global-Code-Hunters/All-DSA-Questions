# Next Greater Element on Right

Also known as **Nearest Greater to Right**.

## Using Stack

**Brute Force :**

- For every element of i we check nearest greater element for every j until we find that arr[j].

```py
class Solution:
    def nextLargerElement(self,arr,n):
        answer = []
        for i in range(n):
            for j in range(i+1, n):
                if arr[j]>arr[i]:
                    answer.append(arr[j])
                    break
            else:
                answer.append(-1)
        return answer
```

**OR :**

```py
class Solution:
    def nextLargerElement(self,arr,n):
        answer = [-1]*n
        for i in range(n):
            for j in range(i+1, n):
                if arr[j]>arr[i]:
                    answer[i] = arr[j]
                    break
        return answer
```

### Using List

```py

```
