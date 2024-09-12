#include <GL/glew.h>
#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // 화면을 지움

    glBegin(GL_POLYGON);           // 사각형 그리기 시작
        glColor3f(1.0, 0.0, 0.0);  // 빨간색
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
    glEnd();

    glFlush();  // 명령 실행
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Test");
    glewInit();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
