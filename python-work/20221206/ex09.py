# 파이썬 예제
# 14를 3으로 나누었을때 몫과 나머지
print(14//3)
print(14%3)

# 문장을 문자열로 만들고 길이를 확인
a = 'you need python'
print(len(a))

# 평균점수를 구하라
k = 80
e = 75
m = 55
avr = (k+e+m)/3
print(avr)

# 문자열 슬라이싱 생년월일 구하기
h = "881120-1068234"
year = h[:2]
month = h[2:4]
date = h[4:6]
birth = '19' + year + '년' + month +'월' + date + '일'
print(birth)
# or print('19'+h[:6])

# 문자열 인덱싱 성별나타내는 숫자 출력하기
print(h[7])
print(h[-7])