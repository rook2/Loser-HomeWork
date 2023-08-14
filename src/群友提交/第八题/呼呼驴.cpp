#include <iostream>
template<class Ty, size_t size>
struct array {
	Ty* begin() { return arr; };
	Ty* end() { return arr + size; };
	Ty arr[size];
};
template <class _First, class... _Rest>
::array(_First, _Rest...)->::array<_First, 1 + sizeof...(_Rest)>;
int main() {
	::array arr{ 1, 2, 3, 4, 5 };
	for (const auto& i : arr) {
		std::cout << i << ' ';
	}
	return 1;
}
//学习尝试使用github 网页版提交!
