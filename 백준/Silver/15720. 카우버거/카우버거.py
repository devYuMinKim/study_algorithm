B, C, D = map(int, input().split())
# 각 가격을 입력 받고 내림차순으로 정리
B_prices = list(map(int, input().split()))
C_prices = list(map(int, input().split()))
D_prices = list(map(int, input().split()))

# 내림차순 정렬
B_prices.sort(reverse=True)
C_prices.sort(reverse=True)
D_prices.sort(reverse=True)

# 원래 가격의 총합 계산
original_price = sum(B_prices) + sum(C_prices) + sum(D_prices)
print(original_price)

# 가능한 세트 메뉴의 수 구하기
set_menu_count = min(B, C, D)

# 할인된 가격 구하기
discounted_price = 0
for i in range(set_menu_count):
    # 세트 메뉴의 가격을 구하고, 10% 할인 적용
    set_price = B_prices[i] + C_prices[i] + D_prices[i]
    discounted_set_price = set_price * 0.9  # 할인 적용
    discounted_price += int(discounted_set_price)  # 할인 가격 계산 후 내림 처리

# 할인되지 않은 나머지 항목들의 가격을 추가
discounted_price += sum(B_prices[set_menu_count:]) + sum(C_prices[set_menu_count:]) + sum(D_prices[set_menu_count:])

# 할인된 총 가격 출력
print(discounted_price)