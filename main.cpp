#include <windows.h>
#include "Enemy.h"

int main() {
	Enemy* enemy = new Enemy;

	// ����������
	enemy->Initialize();

	while (true)
	{
		// �X�V����
		enemy->Update();

		// �X���[�v
		Sleep(1.2 * 1000);
	}

	system("pause");
	return 0;
}