#include "stdafx.h"
#include "mainGame.h"

mainGame::mainGame()
{
}
mainGame::~mainGame()
{
}
HRESULT mainGame::init()
{
	gameNode::init(true);
<<<<<<< HEAD
	SCENEMANAGER->addScene("startscene", new startscene);
	SCENEMANAGER->addScene("testScene", new testScene);
	SCENEMANAGER->changeScene("startscene");
	_ui = new UI;
	_ui->init();
=======

	SCENEMANAGER->addScene("testScene", new testScene);

	SCENEMANAGER->changeScene("testScene");
>>>>>>> master

	return S_OK;
}

void mainGame::release()
{
	gameNode::release();
<<<<<<< HEAD
	_ui->release();
=======
>>>>>>> master
}

void mainGame::update()
{
	gameNode::update();
<<<<<<< HEAD
	SCENEMANAGER->update();
	_ui->update();
=======


	SCENEMANAGER->update();

>>>>>>> master
}

void mainGame::render(/*HDC hdc*/)
{
	//��� ��Ʈ��
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
	//=====================================================


	SCENEMANAGER->render();
	TIMEMANAGER->render(getMemDC());
<<<<<<< HEAD
	_ui->render(); 
=======




	
>>>>>>> master
	//=====================================================
	//������� ������ HDC�� �׸���.(��������!!)
	this->getBackBuffer()->render(getHDC(), 0, 0);
}









