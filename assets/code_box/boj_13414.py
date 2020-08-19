arr = input()
arr = arr.split(" ")
mx = int(arr[0])
N = int(arr[1])

id_list = []

for i in range(N):
    e = input()
    id_list.append(e)

st = []
for i in range(0,N):
    j = N-1 - i
    if(not (id_list[j] in st)):
        st.append(id_list[j])

for i in range(0,mx):
    print(st[len(st)-1 - i])