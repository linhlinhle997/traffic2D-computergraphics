

#include <windows.h>
#include <glut.h>
#include <gl\glu.h>
#include <gl\gl.h>


GLfloat rotation = 90.0;

//Position xe hồng
float posX = 0, posY = 0, posZ = 0;
//Position xe vàng
float posXX = 0, posYY = 0, posZZ = 0;
//Position xe xanh
float posXXX = 0, posYYY = 0, posZZZ = 0;

//Position đen giao thông  1
float posGreenX1 = 0, posGreenY1 = 0, posGreenZ1 = 0;
float posRedX1 = 100, posRedY1 = 0, posRedZ1 = 0;
//Position đen giao thông 2
float posGreenX2 = 100, posGreenY2 = 0, posGreenZ2 = 0;
float posRedX2 = 0, posRedY2 = 0, posRedZ2 = 0;
//Position đen giao thông 3
float posGreenX3 = 0, posGreenY3 = 0, posGreenZ3 = 0;
float posRedX3 = 100, posRedY3 = 0, posRedZ3 = 0;
//Position đen giao thông 4
float posGreenX4 = 100, posGreenY4 = 0, posGreenZ4 = 0;
float posRedX4 = 0, posRedY4 = 0, posRedZ4 = 0;

//Màu nền cửa sổ
void Init()
{
	//Màu đen
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

//Các thiết đặt cửa sổ window
void ReShape(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, 10.0, -10.0);
	glMatrixMode(GL_MODELVIEW);
}

/////////////////////////////////////////*Tọa độ các xe*////////////////////////////////////////

//Xe màu hồng
void car1() {
	glBegin(GL_POLYGON);
	glColor3ub(197, 124, 172);
	glVertex2f(0.3, -10.0);
	glVertex2f(0.3, -8.6);
	glVertex2f(1.7, -8.6);
	glVertex2f(1.7, -10.0);
	glEnd();

}

//Xe màu vàng
void car2() {
	glBegin(GL_POLYGON);
	glColor3ub(252, 245, 76);
	glVertex2f(8.6, 0.3);
	glVertex2f(8.6, 1.7);
	glVertex2f(10, 1.7);
	glVertex2f(10, 0.3);
	glEnd();
}

//Xe màu xanh
void car3() {
	glBegin(GL_POLYGON);
	glColor3ub(0, 178, 191);
	glVertex2f(-1.7, 8.6);
	glVertex2f(-1.7, 10);
	glVertex2f(-0.3, 10);
	glVertex2f(-0.3, 8.6);
	glEnd();
}

///////////////////////////////////*Tọa độ các trụ đèn giao thông*/////////////////////////////////////

//Trụ đèn giao thông 1
void trafficLight1() {
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(2.0, 2.0);
	glVertex2f(2.0, 2.5);
	glVertex2f(3.0, 2.5);
	glVertex2f(3.0, 2.0);
	glEnd();
}
//Trụ đèn giao thông 2
void trafficLight2() {
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-2.5, 2.0);
	glVertex2f(-2.5, 3.0);
	glVertex2f(-2.0, 3.0);
	glVertex2f(-2.0, 2.0);
	glEnd();
}
//Trụ đèn giao thông 3
void trafficLight3() {
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-3.0, -2.5);
	glVertex2f(-3.0, -2.0);
	glVertex2f(-2.0, -2.0);
	glVertex2f(-2.0, -2.5);
	glEnd();
}
//Trụ đèn giao thông 4
void trafficLight4() {
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(2.0, -3.0);
	glVertex2f(2.0, -2.0);
	glVertex2f(2.5, -2.0);
	glVertex2f(2.5, -3.0);
	glEnd();
}

//////////////////////////*Tọa độ 2 màu xanh đỏ của các trụ đèn giao thông*////////////////////////
//Trụ đèn giao thông 
//Đèn xanh
void greenLight1() {
	glBegin(GL_POLYGON);
	glColor3ub(91, 189, 43);
	glVertex2f(2.0, 2.0);
	glVertex2f(2.0, 2.5);
	glVertex2f(2.5, 2.5);
	glVertex2f(2.5, 2.0);
	glEnd();
}
//Đèn đỏ
void redLight1() {
	glBegin(GL_POLYGON);
	glColor3ub(223, 0, 41);
	glVertex2f(2.5, 2.0);
	glVertex2f(2.5, 2.5);
	glVertex2f(3.0, 2.5);
	glVertex2f(3.0, 2.0);
	glEnd();
}

//Trụ đèn giao thông 2
//Đèn xanh
void greenLight2() {
	glBegin(GL_POLYGON);
	glColor3ub(91, 189, 43);
	glVertex2f(-2.5, 2.0);
	glVertex2f(-2.5, 2.5);
	glVertex2f(-2, 2.5);
	glVertex2f(-2.0, 2.0);
	glEnd();
}
//Đèn đỏ
void redLight2() {
	glBegin(GL_POLYGON);
	glColor3ub(223, 0, 41);
	glVertex2f(-2.5, 2.5);
	glVertex2f(-2.5, 3.0);
	glVertex2f(-2.0, 3.0);
	glVertex2f(-2.0, 2.5);
	glEnd();
}

//Trụ đèn giao thông 3
//Đèn xanh
void greenLight3() {
	glBegin(GL_POLYGON);
	glColor3ub(91, 189, 43);
	glVertex2f(-2.5, -2.5);
	glVertex2f(-2.5, -2.0);
	glVertex2f(-2.0, -2.0);
	glVertex2f(-2.0, -2.5);
	glEnd();
}
//Đèn đỏ
void redLight3() {
	glBegin(GL_POLYGON);
	glColor3ub(223, 0, 41);
	glVertex2f(-3.0, -2.5);
	glVertex2f(-3.0, -2.0);
	glVertex2f(-2.5, -2.0);
	glVertex2f(-2.5, -2.5);
	glEnd();
}

////Trụ đèn giao thông 4
//Đèn xanh
void greenLight4() {
	glBegin(GL_POLYGON);
	glColor3ub(91, 189, 43);
	glVertex2f(2.0, -2.5);
	glVertex2f(2.0, -2.0);
	glVertex2f(2.5, -2.0);
	glVertex2f(2.5, -2.5);
	glEnd();
}
//Đèn đỏ
void redLight4() {
	glBegin(GL_POLYGON);
	glColor3ub(223, 0, 41);
	glVertex2f(2.0, -3.0);
	glVertex2f(2.0, -2.5);
	glVertex2f(2.5, -2.5);
	glVertex2f(2.5, -3.0);
	glEnd();
}

//Tham số cộng dồn khi xe di chuyển
float move_unit = 0.1f;

//Vẽ các hình ảnh lên cửa sổ Window
void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//////////////////////////////*Lề đường*///////////////////////////////
	//Lề đường 
	//OX
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(10.0, 2.0);
	glVertex2f(2.0, 2.0);
	glEnd();
	//OY
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(2.0, 2.0);
	glVertex2f(2.0, 10.0);
	glEnd();

	//Lề đường 2
	//OX
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-10.0, -2.0);
	glVertex2f(-2.0, -2.0);
	glEnd();
	//OY
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-2.0, -2.0);
	glVertex2f(-2.0, -10.0);
	glEnd();

	//Lề đường 3
	//OX
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(10.0, -2.0);
	glVertex2f(2.0, -2.0);
	glEnd();
	//OY
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(2.0, -2.0);
	glVertex2f(2.0, -10.0);
	glEnd();

	//Lề đường 4
	//OX
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-10.0, 2.0);
	glVertex2f(-2.0, 2.0);
	glEnd();
	//OY
	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(-2.0, 2.0);
	glVertex2f(-2.0, 10.0);
	glEnd();

	glPopMatrix();

	/////////////////////////////*Tô màu đường*///////////////////////////////
	glBegin(GL_POLYGON);
	glColor3ub(54, 54, 54);
	glVertex2f(-10.0, -2.0);
	glVertex2f(-10.0, 2.0);
	glVertex2f(10.0, 2.0);
	glVertex2f(10.0, -2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(54, 54, 54);
	glVertex2f(-2.0, -10.0);
	glVertex2f(-2.0, 10.0);
	glVertex2f(2.0, 10.0);
	glVertex2f(2.0, -10.0);
	glEnd();

	//////////////////////////*Vạch kẻ đường ngang*////////////////////////////////////
	for (int i = -10; i <= 10.0; i += 1.0) {
		glBegin(GL_LINES);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(1.0 + i, 0.1);
		glVertex2f(0.3 + i, 0.1);
		glEnd();
	}

	////////////////////////*Vạch kẻ đường dọc*//////////////////////////////////
	for (int i = -10; i <= 10.0; i += 1.0) {
		glBegin(GL_LINES);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(0.0, 1.0 + i);
		glVertex2f(0.0, 0.3 + i);
		glEnd();
	}

	//////////////////////////*Tô màu lề đường*//////////////////////
	//Lề đường 1
	glBegin(GL_POLYGON);
	glColor3ub(0, 98, 65);
	glVertex2f(-10.0, 10.0);
	glVertex2f(-2.0, 10.0);
	glVertex2f(-2.0, 3.0);
	glVertex2f(-2.5, 3.0);
	glVertex2f(-2.5, 2.0);
	glVertex2f(-10.0, 2.0);
	glEnd();

	//Lề đường 2
	glBegin(GL_POLYGON);
	glColor3ub(0, 98, 65);
	glVertex2f(3.0, 2.5);
	glVertex2f(2.0, 2.5);
	glVertex2f(2.0, 10.0);
	glVertex2f(10.0, 10.0);
	glVertex2f(10.0, 2.0);
	glVertex2f(3.0, 2.0);
	glEnd();

	//Lề đường 3
	glBegin(GL_POLYGON);
	glColor3ub(0, 98, 65);
	glVertex2f(-10.0, -10.0);
	glVertex2f(-10.0, -2.0);
	glVertex2f(-3.0, -2.0);
	glVertex2f(-3.0, -2.5);
	glVertex2f(-2.0, -2.5);
	glVertex2f(-2.0, -10.0);
	glEnd();

	//Lề đường 4
	glBegin(GL_POLYGON);
	glColor3ub(0, 98, 65);
	glVertex2f(2.5, -3.0);
	glVertex2f(2.5, -2.0);
	glVertex2f(10.0, -2.0);
	glVertex2f(10.0, -10.0);
	glVertex2f(2.0, -10.0);
	glVertex2f(2.0, -3.0);
	glEnd();

	////////////////////////*Trụ đèn giao thông*//////////////////////////////////
	//Trụ đèn giao thông 1
	//Đèn xanh
	glPushMatrix();
	glTranslatef(posGreenX1, posGreenY1, posGreenZ1);
	greenLight1();
	glPopMatrix();
	//Đèn đỏ
	glPushMatrix();
	glTranslatef(posRedX1, posRedY1, posRedZ1);
	redLight1();
	glPopMatrix();
	//////////////////
	trafficLight1();

	//Trụ đèn giao thông 2
	//Đèn xanh
	glPushMatrix();
	glTranslatef(posGreenX2, posGreenY2, posGreenZ2);
	greenLight2();
	glPopMatrix();
	//Đèn đỏ
	glPushMatrix();
	glTranslatef(posRedX2, posRedY2, posRedZ2);
	redLight2();
	glPopMatrix();
	////////////////
	trafficLight2();

	//Trụ đèn giao thông 3
	//Đèn xanh
	glPushMatrix();
	glTranslatef(posGreenX3, posGreenY3, posGreenZ3);
	greenLight3();
	glPopMatrix();
	//Đèn đỏ
	glPushMatrix();
	glTranslatef(posRedX3, posRedY3, posRedZ3);
	redLight3();
	glPopMatrix();
	////////////////
	trafficLight3();

	//Trụ đèn giao thông 4
	//Đèn xanh
	glPushMatrix();
	glTranslatef(posGreenX4, posGreenY4, posGreenZ4);
	greenLight4();
	glPopMatrix();
	//Đèn đỏ
	glPushMatrix();
	glTranslatef(posRedX4, posRedY4, posRedZ4);
	redLight4();
	glPopMatrix();
	////////////////
	trafficLight4();

	//glutWireTeapot(1.0);
	glPushMatrix();


	/////////////////////////////*Vạch qua đường*//////////////////////////////////
	//Vạch qua đường dọc 

	for (float i = 0; i <= 3.6; i += 0.3)
	{
		glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(-3.0, -1.9 + i);
		glVertex2f(-3.0, -1.8 + i);
		glVertex2f(-2.0, -1.8 + i);
		glVertex2f(-2.0, -1.9 + i);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(3.0, -1.9 + i);
		glVertex2f(3.0, -1.8 + i);
		glVertex2f(2.0, -1.8 + i);
		glVertex2f(2.0, -1.9 + i);
		glEnd();
	}
	//Vạch qua đường ngang 

	for (float i = 0; i <= 3.6; i += 0.3)
	{
		glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(-1.9 + i, 2.0);
		glVertex2f(-1.9 + i, 3.0);
		glVertex2f(-1.8 + i, 3.0);
		glVertex2f(-1.8 + i, 2.0);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(-1.9 + i, -2.0);
		glVertex2f(-1.9 + i, -3.0);
		glVertex2f(-1.8 + i, -3.0);
		glVertex2f(-1.8 + i, -2.0);
		glEnd();
	}

	//////////////////////////////////*Xe*///////////////////////////////////
	//Xe hồng
	glPushMatrix();
	glTranslatef(posX, posY, posZ);
	car1();
	glPopMatrix();

	//Xe vàng
	glPushMatrix();
	glTranslatef(posXX, posYY, posZZ);
	car2();
	glPopMatrix();

	//Xe xanh
	glPushMatrix();
	glTranslatef(posXXX, posYYY, posZZZ);
	car3();
	glPopMatrix();


	glFlush();
}

///////////////////*Thiết lập thơi gian chuyển màu đèn cho trụ đèn giao thông*//////////////////////////////
//Mặc định đèn xanh sáng trước
int on1 = 1;
//Luân phiên đèn xanh và đỏ
void changeLight1(int value) {
	if (on1 == 0) {
		posGreenX1 = 100.0;
		posRedX1 = 0.0;
		glutPostRedisplay();
		//Xanh đỏ sáng luân phiên
		on1 = 1;
	}
	else {
		posGreenX1 = 0.0;
		posRedX1 = 100.0;
		glutPostRedisplay();
		on1 = 0;
	}
	glutTimerFunc(4000, changeLight1, 0);
}

//Mặc định đèn đỏ sáng trước
int on2 = 0;
void changeLight2(int value) {
	if (on2 == 0) {
		posGreenX2 = 100.0;
		posRedX2 = 0.0;
		glutPostRedisplay();
		on2 = 1;
	}
	else {
		posGreenX2 = 0.0;
		posRedX2 = 100.0;
		glutPostRedisplay();
		on2 = 0;
	}
	glutTimerFunc(4000, changeLight2, 0);
}

//Mặc định đèn xanh sáng trước
int on3 = 1;
void changeLight3(int value) {
	if (on3 == 0) {
		posGreenX3 = 100.0;
		posRedX3 = 0.0;
		glutPostRedisplay();
		on3 = 1;
	}
	else {
		posGreenX3 = 0.0;
		posRedX3 = 100.0;
		glutPostRedisplay();
		on3 = 0;
	}
	glutTimerFunc(4000, changeLight3, 0);
}

//Mặc định đèn đỏ sáng trước
int on4 = 0;
void changeLight4(int value) {
	if (on4 == 0) {
		posGreenX4 = 100.0;
		posRedX4 = 0.0;
		glutPostRedisplay();
		on4 = 1;
	}
	else {
		posGreenX4 = 0.0;
		posRedX4 = 100.0;
		glutPostRedisplay();
		on4 = 0;
	}
	glutTimerFunc(4000, changeLight4, 0);
}

///////////////////*Thiết lập thời gian di chuyển của các xe*///////////////////////////////
/*Di chuyển xe hồng*/
void update(int value) {
	/*Nếu xe chạy hết đường*/
	if (posX >= 10.0) {
		/*Quay lại vị trí ban đầu*/
		posX = 0.0;
		posY = 0.0;
	}
	else {
		/*Nếu xe chạy tới ngã tư*/
		if (posY >= 8.2) {
			/*Quẹo phải*/
			posX += move_unit;
			glutPostRedisplay();
		}
		else
		{
			/*Tiếp tục chạy*/
			posY += move_unit;
			glutPostRedisplay();
		}
	}
	/*Tốc độ di chuyển*/
	glutTimerFunc(30, update, 0);
}

/*Di chuyển xe vàng*/
void update2(int value) {
	if (posXX <= -5.2 && posXX >= -5.6) {
		if (on1 == 0) {
			posXX -= move_unit;
			glutPostRedisplay();
		}
		else
		{

		}
	}
	/*Nếu xe chạy hết đường*/
	else if (posXX <= -20.0) {
		/*Quay lại vị trí ban đầu*/
		posXX = 0.0;
		glutPostRedisplay();
	}
	else
	{
		/*Xe tiếp tục chạy*/
		posXX -= move_unit;
		glutPostRedisplay();

	}
	/*Tốc độ di chuyển*/
	glutTimerFunc(30, update2, 0);

}

/*Di chuyển xe xanh*/
void update3(int value) {

	if (posYYY <= -5.2 && posYYY >= -5.6) {
		if (on2 == 0) {
			posYYY -= move_unit;
			glutPostRedisplay();
		}
		else
		{

		}
	}
	else if (posYYY <= -20.0) {
		posYYY = 0.0;
		glutPostRedisplay();
	}
	else {
		posYYY -= move_unit;
		glutPostRedisplay();
	}
	/*Tốc độ di chuyển*/
	glutTimerFunc(30, update3, 0);
}


void main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	/*Thiết lập kích thước cửa sổ*/
	glutInitWindowSize(700, 700);
	/*Vị trí cửa sổ xuất hiện*/
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Traffic");

	Init();

	glutReshapeFunc(ReShape);

	glutDisplayFunc(Draw);
	glutTimerFunc(30, update, 0);
	glutTimerFunc(30, update2, 0);
	glutTimerFunc(30, update3, 0);
	glutTimerFunc(000, changeLight1, 0);
	glutTimerFunc(000, changeLight2, 0);
	glutTimerFunc(000, changeLight3, 0);
	glutTimerFunc(000, changeLight4, 0);
	glutMainLoop();

	return;
}