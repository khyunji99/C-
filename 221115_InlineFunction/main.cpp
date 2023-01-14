#include "Monster.h"

int main() {

	Monster mons(100, 30, 40);

	mons.SetHealth(200);

	// mons._health = 200;
	// 위와같이 함수로 호출하고 인자값으로 200을 부여해서
	// 값을 넣지 말고 그냥 mons._health = 200 처럼 바로
	// 값을 집어넣어줘 라고 하는게 inline 함수라고 한다.

	mons.Attack();

	mons.info();

	return 0;
}