#pragma once
#include "base/gameNode.h"
#include "Object/Unit/Player.h"

enum MONSTER_TYPE
{
	TYPE_EMPTY,
	SKELETON_WORRIOR,
	SKELETON_ARCHER
};

class Monster : public gameNode
{
protected:
	image * _img;					//�̹���	
	RECT _monster_size_rc;			//������ ��Ʈ
	RECT _chk_distance_player_rc;	//������ �÷��̾� �ν� ���� ��Ʈ
	//=========================================================
	//===					 ��Ʈ ������						===
	//=========================================================
	int monster_size_width;			//���� ��Ʈ ����
	int monster_size_height;		//���� ��Ʈ ����
	int _chk_distance_player_width;	//������ �÷��̾� �ν� ���� ��Ʈ ����
	int _chk_distance_player_height;//������ �÷��̾� �ν� ���� ��Ʈ ����
	bool _bDebug;
	//=========================================================
	//===					�ɷ�ġ ����						===
	//=========================================================
	int _hp;						//ü��
	int _attack_damage;				//���ݷ�
	int _speed_attack;				//���ݼӵ�
	float _speed_move;				//�̵��ӵ�
	int _colldown_attack;			//���� ���ð�


	//=========================================================
	//===						A I	����						===
	//=========================================================
	bool _bChk_player;				//�νĹ��� �ȿ� �÷��̾ ��� �Դ�
	bool _bChase_player;			//�÷��̾ �Ѵ� ���̴�
	bool _bAttackable_player;		//���ݹ��� �ȿ� �÷��̾ ��� �Դ�
	int _rnd_idleAct;				//�����¿��� �� �ൿ ���� ����
	int _cooldown_idle_Act;			//idle ���� �ൿ ī��Ʈ
	int _cooldown_idle_Stand;		//idle ���� �۶����� ī��Ʈ
	int _cooldown_chase;			//���� ī��Ʈ





	//=========================================================
	//===						��	��						===
	//=========================================================
	//void masterAi();			//�ΰ����� �Ѱ� �Լ�
	void findPlayer();			//�÷��̾ ã�ƶ�!
	void moveLeft();			//�������� �̵�
	void moveRight();			//���������� �̵�
	void jump_up();				//���� ����
	void jump_down();				//�Ʒ��� ����

	void chasePlayer();			//�÷��̾� �߰�
	void compareAttack();		//���ݻ�Ÿ� ���� �ִ��� Ȯ��
	void attack();				//����

	void idle();				//������

public:
	//void set_rc(RECT rc) { _monster_size_rc = rc; }
	//RECT get_rc() { return _monster_size_rc; }
	void show_rc();										//��Ʈ ���̱� ( ��� )	
	void init_monster_size_rc(int x, int y);			//���� ����
	void init_chk_distance_player_rc();					//������ �÷��̾� �ν� ���� ����
	void set_hp(int x) { _hp = x; }						//HP �����ϱ�
	int get_hp() { return _hp; }						//HP �޾ƿ���
		
public:
	Monster();
	~Monster();

	virtual HRESULT init();	//�ʱ�ȭ
	virtual void release();//����
	virtual void update();//�����ϴ°�
	virtual void render(/*HDC hdc*/);//�׸��°�

};


