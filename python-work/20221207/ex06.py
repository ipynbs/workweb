# list 길이 구하기
a = [1,2,3,4,5]

print(len(a))

# from import
# f가 bb폴더 안에 있을때 aa로 가져온다
f = [3,4,5]
print("실행되나")

from aa import bb

print(bb.f)

# doA는 불러오기 
# 문자랑 숫자는 합쳐지지 않음 합칠려면 숫자에 str을 써서 문자로 만들어야함
def doA():
    a = 10
    b = ["hi"]
    print(a + b[0])
    print(str(a)+b[0])
