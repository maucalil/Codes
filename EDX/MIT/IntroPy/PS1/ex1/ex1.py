s = 'zkgjnydviihmjh'
ans = ''
temp = ''

for i in range(len(s)):
    temp += s[i]
    if len(temp) > len(ans):
        ans = temp
    if i > len(s) - 2:
        break
    if s[i] > s[i+1]:
        temp = ''
        
print(ans)
