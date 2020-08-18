check = False
for i in range(1,6):
    st = input()
    if("FBI" in st):
        check = True
        if(i != 5):
            print(i , end = " ")
        else:
            print(i, end = "")

if(not check):
    print("HE GOT AWAY!")
    