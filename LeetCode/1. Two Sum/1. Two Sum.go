func twoSum(nums []int, target int) []int {
	// 숫자를 키로, 인덱스를 값으로 가지는 맵을 생성
	mymap := make(map[int]int)
	for i := 0; i < len(nums); i++ {
		// 현재 숫자와 함께 목표값을 만들 수 있는 숫자가 맵에 있는지
			j, ok := mymap[target-nums[i]]

			// 만약 그런 숫자가 있다면, 그 숫자의 인덱스와 현재 숫자의 인덱스를 반환
			if ok {
					result := []int{j, i}
					return result
			}

			// 현재 숫자와 그 인덱스를 맵에 추가
			mymap[nums[i]] = i
	}

	// 만약 두 숫자의 합이 목표값이 되는 숫자 쌍을 찾지 못했다면, -1, -1을 반환
	result := []int{-1, -1}
	return result
}