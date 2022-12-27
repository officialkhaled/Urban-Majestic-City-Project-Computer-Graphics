#include<windows.h>
#include<iostream>
#include<GL/glut.h>
#define PI          3.141516
#include<math.h>

using namespace std;
int triangleAmount = 1000;
bool handup= false;
GLfloat position = 0.0f;
GLfloat speed = 0.01f;
GLfloat twicePi = 2.0f * PI;
bool rainday = false;
bool night = false;
bool winter = false;
float rain1 = 0.0;

float spin_x = 0;
float spin_y = 0;
float spin_z = 0;

static GLfloat spin =0.0;
static GLfloat spin_speed = 0.2;

void clearColor(float r, float g, float b,float bb)
{
    glClearColor(r,g,b,bb);
}
void setSpin(float x, float y, float z)
{
    spin_x = x;
    spin_y = y;
    spin_z = z;
}

void spinDisplay(void)
{
    spin=spin+spin_speed;
    if(spin>360.0)
    {
        spin=spin-360.0;
    }
    glutPostRedisplay();
}

void updateWindmill(int value)
{
    if(spin < -1.0)
        spin = 1.0f;

    spin -= spin_speed;

    glutPostRedisplay();
    glutTimerFunc(100, updateWindmill, 0);
}

void spinDisplayReverse(void)
{
    spin=spin-spin_speed;
    if(spin<360.0)
    {
        spin=spin+360.0;
    }
    glutPostRedisplay();
}


//(All points are set anti-clockwise) //
void Sky() // Khaled
{

    glBegin(GL_QUADS);
    glColor3ub(173, 216, 230); // Light Blue
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.38f);
    glVertex2f(1.0f, 0.38f);
    glVertex2f(1.0f, 1.0f);
    glEnd();
}


void update(int value)
{

    if(position <-1.0)
        position = 1.0f;

    position -= speed;

    glutPostRedisplay();
    glutTimerFunc(50, update, 0);
}

void road()
{
    glBegin(GL_QUADS);

    glColor3f(0.2f,0.2f,0.2f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, 0.105f);
    glVertex2f(-1.0f, 0.105f);

    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.2f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.8f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.2f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.6f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0f,0.0f, 0.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.05f, 0.01f);
    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f,-0.01f);
    glVertex2f(-0.05f,-0.01f);
    glEnd();
    glPopMatrix();
}


void tree()
{

    //tree 1

    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.0f, 0.0f);
    glVertex2f(-0.64f, 0.2f);
    glVertex2f(-0.64f, 0.3f);
    glVertex2f(-0.65f, 0.3f);
    glVertex2f(-0.65f, 0.2f);
    glEnd();


    GLfloat xt01=-0.645f; //upper circle
    GLfloat yt01=0.3f;
    GLfloat radiust01 =0.035f;
    glColor3f(0.0f,0.2f,0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xt01, yt01);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xt01 + (radiust01 * cos(i *  twicePi / triangleAmount)),
                    yt01 + (radiust01 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();


    GLfloat xt02=-0.645f; //middle circle
    GLfloat yt02=0.33f;
    GLfloat radiust02 =0.034f;
    glColor3f(0.0f,0.2f,0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xt02, yt02);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xt02 + (radiust02 * cos(i *  twicePi / triangleAmount)),
                    yt02 + (radiust02 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

    GLfloat xt03=-0.645f;
    GLfloat yt03=0.36f;
    GLfloat radiust03 =0.027f;
    glColor3f(0.0f,0.2f,0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xt03, yt03);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xt03 + (radiust03 * cos(i *  twicePi / triangleAmount)),
                    yt03 + (radiust03 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

    ////tree2 left most side
    //................................................

    glBegin(GL_QUADS);//root
    glColor3f(0.4f, 0.0f, 0.0f);
    glVertex2f(-0.96f, 0.2f);
    glVertex2f(-0.96f, 0.35f);
    glVertex2f(-0.95f, 0.35f);
    glVertex2f(-0.95f, 0.2f);
    glEnd();


    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.945f, 0.25f);
    glVertex2f(-0.938f, 0.2f);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.955f, 0.26f);
    glVertex2f(-0.958f, 0.2f);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.935f, 0.26f);
    glVertex2f(-0.938f, 0.2f);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.02f, 0.02f, 0.0f);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.945f, 0.25f);
    glVertex2f(-0.938f, 0.2f);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.955f, 0.26f);
    glVertex2f(-0.958f, 0.2f);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.935f, 0.26f);
    glVertex2f(-0.938f, 0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.03f, 0.02f, 0.0f);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.945f, 0.25f);
    glVertex2f(-0.938f, 0.2f);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.955f, 0.26f);
    glVertex2f(-0.958f, 0.2f);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.935f, 0.26f);
    glVertex2f(-0.938f, 0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.04f, 0.02f, 0.0f);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.945f, 0.25f);
    glVertex2f(-0.938f, 0.2f);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.955f, 0.26f);
    glVertex2f(-0.958f, 0.2f);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.935f, 0.26f);
    glVertex2f(-0.938f, 0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.04f, 0.01f, 0.0f);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.945f, 0.25f);
    glVertex2f(-0.938f, 0.2f);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.955f, 0.26f);
    glVertex2f(-0.958f, 0.2f);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.935f, 0.26f);
    glVertex2f(-0.938f, 0.2f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.02f, 0.01f, 0.0f);
    glBegin(GL_TRIANGLES);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.95f, 0.2f);
    glVertex2f(-0.945f, 0.25f);
    glVertex2f(-0.938f, 0.2f);

    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.955f, 0.26f);
    glVertex2f(-0.958f, 0.2f);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.945f, 0.2f);
    glVertex2f(-0.935f, 0.26f);
    glVertex2f(-0.938f, 0.2f);
    glEnd();
    glPopMatrix();



//

    GLfloat xt4=-0.955f;//first circle
    GLfloat yt4=0.4f;
    GLfloat radiust4 =0.0288f;
    glColor3f(0.0f,0.2f,0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xt4, yt4);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xt4 + (radiust4 * cos(i *  twicePi / triangleAmount)),
                    yt4 + (radiust4 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

    GLfloat xt5=-0.955f;//second circle
    GLfloat yt5=0.37f;
    GLfloat radiust5 =0.03f;
    glColor3f(0.0f,0.2f,0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xt5, yt5);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xt5 + (radiust5 * cos(i *  twicePi / triangleAmount)),
                    yt5 + (radiust5 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

    GLfloat xt6=-0.955f;
    GLfloat yt6=0.34f;
    GLfloat radiust6 =0.035f;
    glColor3f(0.0f,0.2f,0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xt6, yt6);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xt6 + (radiust6 * cos(i *  twicePi / triangleAmount)),
                    yt6 + (radiust6 * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

}


void house1()
{

    //house1
    glBegin(GL_POLYGON);
    glColor3ub(238,118,0);  //house main box
    glVertex2f(-0.9f, 0.2f);
    glVertex2f(-0.9f, 0.5f);
    glVertex2f(-0.7f, 0.5f);
    glVertex2f(-0.7f, 0.2f);
    glEnd();


    glLineWidth(12);//upper house line
    glBegin(GL_LINES);
    glColor3f(0.2, 0.0, 0.0);
    glVertex2f(-0.9,0.5);
    glVertex2f(-0.699,0.5);
    glEnd();

    if (winter)
    {
        glLineWidth(12);//upper house line
        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2f(-0.9,0.5);
        glVertex2f(-0.699,0.5);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255,255,255);
        glVertex2f(-0.9,0.51);
        glVertex2f(-0.699,0.52);
        glVertex2f(-0.72f, 0.53f);
        glVertex2f(-0.8f, 0.511f);
        glVertex2f(-0.9,0.53);
        glEnd();

    }


//windos...................................................................................................
    glBegin(GL_QUADS);//upper small window middle
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.808f, 0.43f);
    glVertex2f(-0.792f, 0.43f);
    glVertex2f(-0.792f, 0.46f);
    glVertex2f(-0.808f, 0.46f);

    glColor3f(0.6f,0.8f,1.0f);
    glVertex2f(-0.805f, 0.435f);
    glVertex2f(-0.795f, 0.435f);
    glVertex2f(-0.795f, 0.455f);
    glVertex2f(-0.805f, 0.455f);

    glEnd();

    glPushMatrix(); //first window translate
    glTranslatef(-0.06f, 0.0f, 0.0f);

    glBegin(GL_QUADS);//upper small window first
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.808f, 0.43f);
    glVertex2f(-0.792f, 0.43f);
    glVertex2f(-0.792f, 0.46f);
    glVertex2f(-0.808f, 0.46f);

    glColor3f(0.6f,0.8f,1.0f);
    glVertex2f(-0.805f, 0.435f);
    glVertex2f(-0.795f, 0.435f);
    glVertex2f(-0.795f, 0.455f);
    glVertex2f(-0.805f, 0.455f);

    glEnd();
    glPopMatrix();

    glPushMatrix(); //first window translate
    glTranslatef(0.06f, 0.0f, 0.0f);

    glBegin(GL_QUADS);//upper small window 3rd
    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.808f, 0.43f);
    glVertex2f(-0.792f, 0.43f);
    glVertex2f(-0.792f, 0.46f);
    glVertex2f(-0.808f, 0.46f);

    glColor3f(0.6f,0.8f,1.0f);
    glVertex2f(-0.805f, 0.435f);
    glVertex2f(-0.795f, 0.435f);
    glVertex2f(-0.795f, 0.455f);
    glVertex2f(-0.805f, 0.455f);

    glEnd();
    glPopMatrix();


    glBegin(GL_QUADS);

    glColor3f(1.0f,1.0f,1.0f);//2nd window background

    glVertex2f(-0.78f, 0.32f);
    glVertex2f(-0.82f, 0.32f);
    glVertex2f(-0.82f, 0.38f);
    glVertex2f(-0.78f, 0.38f);

    glColor3f(0.2f,0.0f,0.0f);//2nd window upper line

    glVertex2f(-0.775f, 0.39f);
    glVertex2f(-0.825f, 0.39f);
    glVertex2f(-0.825f, 0.38f);
    glVertex2f(-0.775f, 0.38f);


    glColor3f(0.6f,0.8f,1.0f);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }

    glVertex2f(-0.785f, 0.325f); //2nd windoe small box 4
    glVertex2f(-0.795f, 0.325f);
    glVertex2f(-0.795f, 0.345f);
    glVertex2f(-0.785f, 0.345f);

    glVertex2f(-0.785f, 0.35f);//2nd windoe small box 2
    glVertex2f(-0.795f, 0.35f);
    glVertex2f(-0.795f, 0.37f);
    glVertex2f(-0.785f, 0.37f);

    glVertex2f(-0.815f, 0.325f);//2nd windoe small box 3
    glVertex2f(-0.805f, 0.325f);
    glVertex2f(-0.805f, 0.345f);
    glVertex2f(-0.815f, 0.345f);

    glVertex2f(-0.815f, 0.35f);//2nd windoe small box 1
    glVertex2f(-0.805f, 0.35f);
    glVertex2f(-0.805f, 0.37f);
    glVertex2f(-0.815f, 0.37f);
    glEnd();

    glLineWidth(1); //2nd window middle line
    glBegin(GL_LINES);
    glVertex2f(-0.80f, 0.32f);
    glVertex2f(-0.80f, 0.38f);
    glEnd();


    glPushMatrix(); //first window translate
    glTranslatef(-0.06f, 0.0f, 0.0f);

    glBegin(GL_QUADS);

    glColor3f(1.0f,1.0f,1.0f);//1st window background

    glVertex2f(-0.78f, 0.32f);
    glVertex2f(-0.82f, 0.32f);
    glVertex2f(-0.82f, 0.38f);
    glVertex2f(-0.78f, 0.38f);

    glColor3f(0.2f,0.0f,0.0f);//1st window upper line

    glVertex2f(-0.775f, 0.39f);
    glVertex2f(-0.825f, 0.39f);
    glVertex2f(-0.825f, 0.38f);
    glVertex2f(-0.775f, 0.38f);


    glColor3f(0.6f,0.8f,1.0f);

    glVertex2f(-0.785f, 0.325f);//1st windoe small box 4
    glVertex2f(-0.795f, 0.325f);
    glVertex2f(-0.795f, 0.345f);
    glVertex2f(-0.785f, 0.345f);

    glVertex2f(-0.785f, 0.35f);//1st windoe small box 2
    glVertex2f(-0.795f, 0.35f);
    glVertex2f(-0.795f, 0.37f);
    glVertex2f(-0.785f, 0.37f);

    glVertex2f(-0.815f, 0.325f);//1st windoe small box 3
    glVertex2f(-0.805f, 0.325f);
    glVertex2f(-0.805f, 0.345f);
    glVertex2f(-0.815f, 0.345f);

    glVertex2f(-0.815f, 0.35f);//1st windoe small box 1
    glVertex2f(-0.805f, 0.35f);
    glVertex2f(-0.805f, 0.37f);
    glVertex2f(-0.815f, 0.37f);


    glEnd();
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-0.80f, 0.32f);
    glVertex2f(-0.80f, 0.38f);
    glEnd();

    glPopMatrix();

    glPushMatrix(); //3rd window translate
    glTranslatef(0.06f, 0.0f, 0.0f);

    glBegin(GL_QUADS);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.78f, 0.32f);
    glVertex2f(-0.82f, 0.32f);
    glVertex2f(-0.82f, 0.38f);
    glVertex2f(-0.78f, 0.38f);

    glColor3f(0.2f,0.0f,0.0f);

    glVertex2f(-0.775f, 0.39f);
    glVertex2f(-0.825f, 0.39f);
    glVertex2f(-0.825f, 0.38f);
    glVertex2f(-0.775f, 0.38f);


    glColor3f(0.6f,0.8f,1.0f);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }

    glVertex2f(-0.785f, 0.325f);
    glVertex2f(-0.795f, 0.325f);
    glVertex2f(-0.795f, 0.345f);
    glVertex2f(-0.785f, 0.345f);

    glVertex2f(-0.785f, 0.35f);
    glVertex2f(-0.795f, 0.35f);
    glVertex2f(-0.795f, 0.37f);
    glVertex2f(-0.785f, 0.37f);

    glVertex2f(-0.815f, 0.325f);
    glVertex2f(-0.805f, 0.325f);
    glVertex2f(-0.805f, 0.345f);
    glVertex2f(-0.815f, 0.345f);

    glVertex2f(-0.815f, 0.35f);
    glVertex2f(-0.805f, 0.35f);
    glVertex2f(-0.805f, 0.37f);
    glVertex2f(-0.815f, 0.37f);


    glEnd();
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-0.80f, 0.32f);
    glVertex2f(-0.80f, 0.38f);
    glEnd();

    glPopMatrix();

    glPushMatrix(); //5th window translate
    glTranslatef(0.0f, -0.1f, 0.0f);

    glBegin(GL_QUADS);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.78f, 0.32f);
    glVertex2f(-0.82f, 0.32f);
    glVertex2f(-0.82f, 0.38f);
    glVertex2f(-0.78f, 0.38f);

    glColor3f(0.2f,0.0f,0.0f);

    glVertex2f(-0.775f, 0.39f);
    glVertex2f(-0.825f, 0.39f);
    glVertex2f(-0.825f, 0.38f);
    glVertex2f(-0.775f, 0.38f);


    glColor3f(0.6f,0.8f,1.0f);

    glVertex2f(-0.785f, 0.325f);
    glVertex2f(-0.795f, 0.325f);
    glVertex2f(-0.795f, 0.345f);
    glVertex2f(-0.785f, 0.345f);

    glVertex2f(-0.785f, 0.35f);
    glVertex2f(-0.795f, 0.35f);
    glVertex2f(-0.795f, 0.37f);
    glVertex2f(-0.785f, 0.37f);

    glVertex2f(-0.815f, 0.325f);
    glVertex2f(-0.805f, 0.325f);
    glVertex2f(-0.805f, 0.345f);
    glVertex2f(-0.815f, 0.345f);

    glVertex2f(-0.815f, 0.35f);
    glVertex2f(-0.805f, 0.35f);
    glVertex2f(-0.805f, 0.37f);
    glVertex2f(-0.815f, 0.37f);


    glEnd();
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-0.80f, 0.32f);
    glVertex2f(-0.80f, 0.38f);
    glEnd();

    glPopMatrix();


    glPushMatrix(); //4th window translate
    glTranslatef(-0.06f, -0.1f, 0.0f);

    glBegin(GL_QUADS);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.78f, 0.32f);
    glVertex2f(-0.82f, 0.32f);
    glVertex2f(-0.82f, 0.38f);
    glVertex2f(-0.78f, 0.38f);

    glColor3f(0.2f,0.0f,0.0f);

    glVertex2f(-0.775f, 0.39f);
    glVertex2f(-0.825f, 0.39f);
    glVertex2f(-0.825f, 0.38f);
    glVertex2f(-0.775f, 0.38f);


    glColor3f(0.6f,0.8f,1.0f);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }

    glVertex2f(-0.785f, 0.325f);
    glVertex2f(-0.795f, 0.325f);
    glVertex2f(-0.795f, 0.345f);
    glVertex2f(-0.785f, 0.345f);

    glVertex2f(-0.785f, 0.35f);
    glVertex2f(-0.795f, 0.35f);
    glVertex2f(-0.795f, 0.37f);
    glVertex2f(-0.785f, 0.37f);

    glVertex2f(-0.815f, 0.325f);
    glVertex2f(-0.805f, 0.325f);
    glVertex2f(-0.805f, 0.345f);
    glVertex2f(-0.815f, 0.345f);

    glVertex2f(-0.815f, 0.35f);
    glVertex2f(-0.805f, 0.35f);
    glVertex2f(-0.805f, 0.37f);
    glVertex2f(-0.815f, 0.37f);


    glEnd();
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(-0.80f, 0.32f);
    glVertex2f(-0.80f, 0.38f);
    glEnd();

    glPopMatrix();


//door

    glBegin(GL_QUADS);

    glColor3f(1.0f,1.0f,1.0f);

    glVertex2f(-0.76f, 0.2f);//door background
    glVertex2f(-0.72f, 0.2f);
    glVertex2f(-0.72f, 0.28f);
    glVertex2f(-0.76f, 0.28f);


    glColor3f(0.6f,0.8f,1.0f);

    glVertex2f(-0.755f, 0.21f);//door left side
    glVertex2f(-0.742f, 0.21f);
    glVertex2f(-0.742f, 0.27f);
    glVertex2f(-0.755f, 0.27f);

    glVertex2f(-0.738f, 0.21f);//door right side
    glVertex2f(-0.725f, 0.21f);
    glVertex2f(-0.725f, 0.27f);
    glVertex2f(-0.738f, 0.27f);


    glEnd();

    glBegin(GL_QUADS);//shiri


    glColor3f(0.8f,0.8f,0.8f);

    glVertex2f(-0.76f, 0.2f);
    glVertex2f(-0.72f, 0.2f);
    glVertex2f(-0.72f, 0.19f);
    glVertex2f(-0.76f, 0.19f);

    glVertex2f(-0.755f, 0.17f);
    glVertex2f(-0.725f, 0.17f);
    glVertex2f(-0.725f, 0.19f);
    glVertex2f(-0.755f, 0.19f);
    glEnd();
}

void house2()
{

//house2
    glPushMatrix();
    glTranslatef(1.01f, 0.0f, 0.0f);


    glBegin(GL_QUADS); // big house box

    glColor3ub(105, 89, 205);
    glVertex2f(-0.47f, 0.6f); //left upper point
    glVertex2f(-0.47f, 0.2f);
    glVertex2f(-0.6f, 0.2f);
    glVertex2f(-0.6f, 0.6f);//right upper point
    glEnd();



    glBegin(GL_QUADS); //side house box
    //glColor3f(0.02, 0.18, 0.4);
    glColor3ub(72, 61, 139);
    glVertex2f(-0.47f, 0.47f);//right upper point
    glVertex2f(-0.4f, 0.35f);
    glVertex2f(-0.4f, 0.2f);
    glVertex2f(-0.47f, 0.2f);//right lower point
    glEnd();

    glLineWidth(8);//side house line
    glBegin(GL_LINES);
    glColor3f(0.04, 0.31, 0.52);
    glVertex2f(-.472,.47);
    glVertex2f(-.39,.34);
    glEnd();

    glLineWidth(5); //big house upper line
    glBegin(GL_LINES);
    glColor3f(0.05, 0.20, 0.34);
    glVertex2f(-.61,.60);
    glVertex2f(-.46,.60);
    glEnd();

    glBegin(GL_QUADS);//window 1 background

    glColor3f(0.95, 0.98, 0.98);
    glVertex2f(-0.53f, 0.56f);
    glVertex2f(-0.53f, 0.5f);
    glVertex2f(-0.57f, 0.5f);
    glVertex2f(-0.57f, 0.56f);
    glEnd();

    glLineWidth(6);//window 1 background line
    glBegin(GL_LINES);
    glColor3f(0.00, 0.20, 0.35);
    glVertex2f(-.521,.57);
    glVertex2f(-.579,.57);
    glEnd();

//
    glBegin(GL_QUADS);


    glColor3f(0.38, 0.68, 0.78);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.532f, 0.557f);//window 1 door right
    glVertex2f(-0.532f, 0.503f);
    glVertex2f(-0.549f, 0.503);
    glVertex2f(-0.549f, 0.557f);

    glVertex2f(-0.552f, 0.557f); //window 1 door left
    glVertex2f(-0.552f, 0.503f);
    glVertex2f(-0.568f, 0.503);
    glVertex2f(-0.568f, 0.557f);
    glEnd();

    glBegin(GL_QUADS); //window 1 lower line
    glColor3f(0.62, 0.67, 0.73);
    glVertex2f(-0.52f, 0.51f);
    glVertex2f(-0.52f, 0.475f);
    glVertex2f(-0.58f, 0.475);
    glVertex2f(-0.58f, 0.51f);
    glEnd();



    glBegin(GL_QUADS); //window 3 background

    glColor3f(0.95, 0.98, 0.98);
    glVertex2f(-0.53f, 0.3f);
    glVertex2f(-0.53f, 0.24f);
    glVertex2f(-0.57f, 0.24f);
    glVertex2f(-0.57f, 0.3f);
    glEnd();

    glLineWidth(6);//window 3 upper line
    glBegin(GL_LINES);
    glColor3f(0.00, 0.20, 0.35);
    glVertex2f(-.521,.31);
    glVertex2f(-.579,.31);
    glEnd();



    glBegin(GL_QUADS);

    glColor3f(0.38, 0.68, 0.78);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.532f, 0.297f);//window 3 right door
    glVertex2f(-0.532f, 0.243f);
    glVertex2f(-0.549f, 0.243);
    glVertex2f(-0.549f, 0.297f);

    glVertex2f(-0.552f, 0.297f); ////window 3 left door
    glVertex2f(-0.552f, 0.243f);
    glVertex2f(-0.568f, 0.243);
    glVertex2f(-0.568f, 0.297f);

    glEnd();

    glBegin(GL_QUADS); //window 3 lower line
    glColor3f(0.62, 0.67, 0.73);
    glVertex2f(-0.52f, 0.25f);
    glVertex2f(-0.52f, 0.215f);
    glVertex2f(-0.58f, 0.215);
    glVertex2f(-0.58f, 0.25f);
    glEnd();


    glBegin(GL_QUADS); //window 2 background white
    glColor3f(0.95, 0.98, 0.98);
    glVertex2f(-0.53f, 0.43f);
    glVertex2f(-0.53f, 0.37f);
    glVertex2f(-0.57f, 0.37f);
    glVertex2f(-0.57f, 0.43f);
    glEnd();

    glLineWidth(6); //window 2 upper line
    glBegin(GL_LINES);
    glColor3f(0.00, 0.20, 0.35);
    glVertex2f(-.521,.44);
    glVertex2f(-.579,.44);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.38, 0.68, 0.78);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }

    glVertex2f(-0.532f, 0.427f); //window 2 right door
    glVertex2f(-0.532f, 0.373f);
    glVertex2f(-0.549f, 0.373);
    glVertex2f(-0.549f, 0.427f);

    glVertex2f(-0.552f, 0.427f); //window 2 left door
    glVertex2f(-0.552f, 0.373f);
    glVertex2f(-0.568f, 0.373);
    glVertex2f(-0.568f, 0.427f);

    glEnd();

    glBegin(GL_QUADS); //window 2 lower line
    glColor3f(0.62, 0.67, 0.73);
    glVertex2f(-0.52f, 0.38f);
    glVertex2f(-0.52f, 0.345f);
    glVertex2f(-0.58f, 0.345);
    glVertex2f(-0.58f, 0.38f);
    glEnd();


    glBegin(GL_QUADS); //side window 1 front glass
    glColor3f(0.95, 0.98, 0.98);
    glVertex2f(-0.428f, 0.37f);
    glVertex2f(-0.428f, 0.32f);
    glVertex2f(-0.453f, 0.32f);
    glVertex2f(-0.453f, 0.37f);
    glEnd();

    glBegin(GL_QUADS);//side window 1 background white
    glColor3f(0.38, 0.68, 0.78);
    glVertex2f(-0.431f, 0.365f);
    glVertex2f(-0.431f, 0.323f);
    glVertex2f(-0.450f, 0.323);
    glVertex2f(-0.450f, 0.365f);
    glEnd();


    glBegin(GL_QUADS); //door background
    glColor3f(0.95, 0.98, 0.98);
    glVertex2f(-0.425f, 0.3);
    glVertex2f(-0.425f, 0.2f);
    glVertex2f(-0.455f, 0.2);
    glVertex2f(-0.455f, 0.3);
    glEnd();

    glLineWidth(4); //door lower box left
    glBegin(GL_LINES);
    glColor3f(0.62, 0.67, 0.73);
    glVertex2f(-.435,.215);
    glVertex2f(-.435,.245);
    glEnd();

    glLineWidth(4);//door lower box right
    glBegin(GL_LINES);
    glColor3f(0.62, 0.67, 0.73);
    glVertex2f(-.445,.215);
    glVertex2f(-.445,.245);
    glEnd();


    glLineWidth(4);//door lower upper right box
    glBegin(GL_LINES);
    glColor3f(0.62, 0.67, 0.73);
    glVertex2f(-.435,.255);
    glVertex2f(-.435,.285);
    glEnd();

    glLineWidth(4);//door lower upper left box
    glBegin(GL_LINES);
    glColor3f(0.62, 0.67, 0.73);
    glVertex2f(-.445,.255);
    glVertex2f(-.445,.285);
    glEnd();

    glLineWidth(7); //side house lower door line
    glBegin(GL_LINES);
    glColor3f(0.80, 0.80, 0.80);
    glVertex2f(-.421,.2);
    glVertex2f(-.458,.2);
    glEnd();

    if(winter)
    {
        glBegin(GL_POLYGON);
        glColor3ub(255,255,255);

        glVertex2f(-0.55f, 0.60f); //left upper point
        glVertex2f(-0.49f, 0.60f);
        glVertex2f(-0.5f, 0.62f);
        glVertex2f(-0.50f, 0.62f);//right upper point

        glEnd();

        glLineWidth(5); //big house upper line
        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2f(-.61,.60);
        glVertex2f(-.46,.60);
        glEnd();

    }

    glPopMatrix();


}



void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void house3()
{
    //hospital<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

    glPushMatrix();
    glTranslatef(-1.0f, 0.0f, 0.0f);



    glBegin(GL_QUADS);// hos big box right
    glColor3ub(209, 238, 238);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.7f, 0.17f);
    glVertex2f(0.48f, 0.17f);
    glVertex2f(0.48f, 0.6f);
    glEnd();


    glLineWidth(6); //hos upper line
    glBegin(GL_LINES);
    glColor3f(0.23, 0.71, 0.78);
    glVertex2f(0.45f, 0.6f);
    glVertex2f(0.715f, 0.6f);
    glEnd();

    if(winter)

    {

        glLineWidth(6); //hos upper line
        glBegin(GL_LINES);
        glColor3ub(255,255,255);
        glVertex2f(0.45f, 0.6f);
        glVertex2f(0.715f, 0.6f);
        glEnd();

        glBegin(GL_POLYGON);//snow
        glColor3ub(255,255,255);
        glVertex2f(0.45f, 0.6f);
        glVertex2f(0.55f, 0.62f);
        glVertex2f(0.62f, 0.63f);
        glVertex2f(0.71f, 0.6f);
        glEnd();

    }

    glBegin(GL_QUADS);//hos right window background
    glColor3f(0.45, 0.79, 0.89);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(0.58f, 0.52f);
    glVertex2f(0.58f, 0.18f);
    glVertex2f(0.7f, 0.18f);
    glVertex2f(0.7f, 0.52f);
    glEnd();

    glBegin(GL_QUADS); //hospital left window background
    glColor3f(0.45, 0.79, 0.89);
    glVertex2f(0.535f, 0.52f);
    glVertex2f(0.535f, 0.18f);
    glVertex2f(0.48f, 0.18f);
    glVertex2f(0.48f, 0.52f);
    glEnd();

    glLineWidth(2.4);
    glBegin(GL_LINES);
    glColor3f(1.00, 1.00, 1.00);
    glVertex2f(0.62f, 0.52f);//upper window line1
    glVertex2f(0.62f, 0.18f);

    glVertex2f(0.66f, 0.52f);//upper win line2
    glVertex2f(0.66f, 0.18f);

    glVertex2f(0.58f, 0.248f);//lower window parallel line 4
    glVertex2f(0.7f, 0.248);

    glVertex2f(0.58f, 0.316f);//par3
    glVertex2f(0.7f, 0.316);

    glVertex2f(0.58f, 0.384f);//par2
    glVertex2f(0.7f, 0.384);

    glVertex2f(0.58f, 0.452f); //upper par line 1
    glVertex2f(0.7f, 0.452);
    glEnd();

    glLineWidth(6); //big hos side window line
    glBegin(GL_LINES);
    //glColor3f(0.17, 0.53, 0.55);
    glVertex2f(0.535f, 0.248f);//left side window line 4
    glVertex2f(0.48f, 0.248);

    glVertex2f(0.535f, 0.316f);//left side window line 3
    glVertex2f(0.48f, 0.316);

    glVertex2f(0.535f, 0.384f);//left side window line 2
    glVertex2f(0.48f, 0.384);

    glVertex2f(0.535f, 0.452f);//left side window line 4
    glVertex2f(0.48f, 0.452);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.28, 0.68, 0.81);
    if (night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(0.67f, 0.255f);//hos door
    glVertex2f(0.67f, 0.17f);
    glVertex2f(0.61f, 0.17f);
    glVertex2f(0.61f, 0.255f);
    glEnd();

    glLineWidth(2);//hos door middle line
    glBegin(GL_LINES);
    glColor3f(0.17, 0.53, 0.55);
    glVertex2f(.64,.17);
    glVertex2f(.64,.25);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3f(0.73, 0.89, 0.87);
    glVertex2f(0.67f, 0.255f);//door right side line
    glVertex2f(0.67f, 0.17);

    glVertex2f(0.61f, 0.255f);//door right side line
    glVertex2f(0.61f, 0.17);
    glEnd();


    glLineWidth(5);//door upper line
    glBegin(GL_LINES);
    glColor3f(0.17, 0.53, 0.55);
    glVertex2f(0.6f, 0.255f);
    glVertex2f(0.68f, 0.255);
    glEnd();


    glColor3f(0.0,0.0,0.0);
    renderBitmapString(0.54f, 0.56f, 0.0f, GLUT_BITMAP_9_BY_15, "Hospital");
    glPopMatrix();
}


void upperLamp()
{

//lamp 1
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//parallel stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);//lamp1 point

    glVertex2f(-0.885f, 0.213f);


    glEnd();

    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left night light
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f); //right night lamp light
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);

        glEnd();
    }

    ////lamp 2

    glPushMatrix();
    glTranslatef(0.2f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);//point

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);
        glVertex2f(-0.915f, 0.213f);//left light
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right light
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);

        glEnd();
    }
    glPopMatrix();


    ////lamp3

    glPushMatrix();
    glTranslatef(0.4f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);//point

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left light
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right light
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);
        glEnd();
    }
    glPopMatrix();

    ////lamp4

    glPushMatrix();
    glTranslatef(0.6f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);//point

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left light
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right light
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);

        glEnd();
    }
    glPopMatrix();


    ////lamp5

    glPushMatrix();
    glTranslatef(0.8f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);//point

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left light
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right light
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);
        glEnd();
    }
    glPopMatrix();


    ////lamp6

    glPushMatrix();
    glTranslatef(1.0f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left light
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right light
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);
        glEnd();
    }
    glPopMatrix();


    ////lamp7

    glPushMatrix();
    glTranslatef(1.2f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);//point

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left light
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);// right light
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);

        glEnd();
    }
    glPopMatrix();


    ////lamp8

    glPushMatrix();
    glTranslatef(1.4f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);

        glEnd();
    }
    glPopMatrix();

    ////lamp9

    glPushMatrix();
    glTranslatef(1.6f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);

        glEnd();
    }
    glPopMatrix();


    ////lamp10

    glPushMatrix();
    glTranslatef(1.8f,0.0f,0.0f);
    glBegin(GL_QUADS);

    glColor3f(0.8f,0.9f,1.0f);//stand
    glVertex2f(-0.9025f, 0.21f);
    glVertex2f(-0.8975f, 0.21f);
    glVertex2f(-0.8975f, 0.11f);
    glVertex2f(-0.9025f, 0.11f);

    glColor3f(0.8f,0.9f,1.0f);//par stand
    glVertex2f(-0.915f, 0.21f);
    glVertex2f(-0.885f, 0.21f);
    glVertex2f(-0.885f, 0.216f);
    glVertex2f(-0.915f, 0.216f);

    glEnd();

    glPointSize(4);
    glBegin(GL_POINTS);
    glColor3f(0.0f,0.0f,0.0f);
    if(night)
    {
        glColor3f(0.9f,0.9f,0.0f);
    }
    glVertex2f(-0.915f, 0.213f);//point

    glVertex2f(-0.885f, 0.213f);
    glEnd();
    if(night)
    {
        //night light
        glBegin(GL_TRIANGLES);
        glColor3f(0.9f,0.9f,0.0f);//left
        glVertex2f(-0.915f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.905f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.95f, 0.12f);

        glColor3f(0.9f,0.9f,0.0f);//right
        glVertex2f(-0.885f, 0.213f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.895f, 0.12f);
        glColor3f(0.8f,0.8f,0.8f);
        glVertex2f(-0.85f, 0.12f);
        glEnd();
    }
    glPopMatrix();


}


void police()
{

// police head
    glPushMatrix();
    glTranslatef(-0.01f,0.0f,0.0f);
    GLfloat xxp=0.4f;
    GLfloat xyp=0.195f;
    GLfloat radiusp =0.008f;

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(xxp, xyp); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( xxp + (radiusp * cos(i *  twicePi / triangleAmount)),
                    xyp+ (radiusp * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

    glBegin(GL_QUADS);//police body
    glColor3f(0.8f,0.8f,0.0f);//body background
    glVertex2f(0.394f, 0.185f);
    glVertex2f(0.407f, 0.185f);
    glVertex2f(0.407f, 0.155f);
    glVertex2f(0.394f, 0.155f);


    glEnd();

    glBegin(GL_QUADS);
//right hand
    glColor3f(0.0f,0.0f,1.0f); //hand upper side
    glVertex2f(0.411f, 0.185f);
    glVertex2f(0.407f, 0.185f);
    glVertex2f(0.407f, 0.145f);
    glVertex2f(0.411f, 0.145f);

    glColor3f(1.0f,1.0f,1.0f); //hand gloves
    glVertex2f(0.411f, 0.155f);
    glVertex2f(0.407f, 0.155f);
    glVertex2f(0.407f, 0.145f);
    glVertex2f(0.411f, 0.145f);
//left hand
    if(!handup)
    {
        glColor3f(0.0f,0.0f,1.0f);//upper left hand
        glVertex2f(0.394f, 0.185f);
        glVertex2f(0.39f, 0.185f);
        glVertex2f(0.39f, 0.145f);
        glVertex2f(0.394f, 0.145f);

        glColor3f(1.0f,1.0f,1.0f);//gloves
        glVertex2f(0.394f, 0.155f);
        glVertex2f(0.39f, 0.155f);
        glVertex2f(0.39f, 0.145f);
        glVertex2f(0.394f, 0.145f);
    }

    //left hand up
    if(handup)
    {
        glColor3f(0.0f,0.0f,1.0f);//up hand left
        glVertex2f(0.394f, 0.175f);
        glVertex2f(0.39f, 0.175f);
        glVertex2f(0.39f, 0.215f);
        glVertex2f(0.394f, 0.215f);

        glColor3f(1.0f,1.0f,1.0f);//gloves
        glVertex2f(0.394f, 0.205f);
        glVertex2f(0.39f, 0.205f);
        glVertex2f(0.39f, 0.215f);
        glVertex2f(0.394f, 0.215f);


    }
// left lag

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.406f, 0.12f);
    glVertex2f(0.401f, 0.12f);
    glVertex2f(0.401f, 0.155f);
    glVertex2f(0.406f, 0.155f);

// right lag

    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(0.395f, 0.12f);
    glVertex2f(0.4f, 0.12f);
    glVertex2f(0.4f, 0.155f);
    glVertex2f(0.395f, 0.155f);

    //table
    glColor3f(0.0f,0.0f,0.0f);//black
    glVertex2f(0.415f, 0.12f);
    glVertex2f(0.47f, 0.12f);
    glVertex2f(0.46f, 0.158f);
    glVertex2f(0.42f, 0.158f);

    glColor3f(0.9f,0.9f,0.0f);//yellow
    glVertex2f(0.414f, 0.12f);
    glVertex2f(0.455f, 0.12f);
    glVertex2f(0.46f, 0.158f);
    glVertex2f(0.42f, 0.158f);

    glEnd();
    glPopMatrix();

}


void mouse(int button,int state,int x,int y)
{
    switch(button)
    {
    case GLUT_LEFT_BUTTON:
        if(state==GLUT_DOWN)
            glutIdleFunc(spinDisplay);
        break;



    case GLUT_MIDDLE_BUTTON:
        if(state==GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;



    case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN)
            glutIdleFunc(spinDisplayReverse);
        break;



    default:
        break;



    }
}

void first_blade()
{

    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.78f,0.3f,0.0f);
    glRotatef(spin, 0.0f, 0.0f,1.0f);
    glTranslatef(-0.78f,-0.3f,0.0f);

//Blade_One  left

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(200, 255, 255);
    glVertex2f(.77,.3);
    glVertex2f(.66,.19);
    glEnd();


    glPopMatrix();
}


void second_blade()
{

    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.78f,0.3f,0.0f);
    glRotatef(spin, 0.0f, 0.0f,1.0f);
    glTranslatef(-0.78f,-0.3f,0.0f);

//
//    Blade_two top

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(200, 255, 255);
    glVertex2f(.78,.3);
    glVertex2f(.78,.5);
    glEnd();



    glPopMatrix();
}

void third_blade()
{

//blade////
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.78f,0.3f,0.0f);
    glRotatef(spin, 0.0f, 0.0f,1.0f);
    glTranslatef(-0.78f,-0.3f,0.0f);

    glLineWidth(10);
    glBegin(GL_LINES);
    glColor3ub(200, 255, 255);
    glVertex2f(.78,.3);
    glVertex2f(.9,.19);
    glEnd();

    glPopMatrix();
}

//windmill
void windmill_stand()  //id26
{


////windmill 1st stand
    glColor3ub(176, 196, 222);
    glBegin(GL_POLYGON);
    glVertex2f(0.76, -0.299);
    glVertex2f(0.775, 0.3);
    glVertex2f(0.79, 0.31);
    glVertex2f(0.81, -0.299);
    glEnd();

}

void windmill_motor()
{

    //circle 1st windmill
    int xy;
    GLfloat p93=0.78f;
    GLfloat q93= 0.3f;
    GLfloat r93 = 0.03f;
    int tringle94=40;
    GLfloat tp94 =2.0f * PI  ;


    glBegin (GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f (p93,q93);
    for(int xy= 0; xy<=tringle94; xy++)
    {
        glVertex2f (
            p93+(r93*cos(xy*tp94/tringle94)),
            q93+(r93*sin(xy*tp94/tringle94))
        );
    }

    glEnd ();

}


void myDisplay(void)
{
    clearColor(0.0f, 0.7f, 0.4f, 1.0f);
    if(night)
    {
        clearColor(0.07, 0.30, 0.15, 1);
    }


    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub (128, 128, 128);
    glPointSize(5.0);


    Sky();
    road();

    house1();
    house2();
    house3();
    tree();
    upperLamp();
    police();
    windmill_stand();
    first_blade();
    second_blade();
    third_blade();
    windmill_motor();



    glFlush ();

}


void key(unsigned char key,int x, int y )
{
    switch(key)
    {


    case 'n':
        night = true;
        break;
    case 'd':
        night = false;
        break;


    case 'h':
        if(handup)
        {
            handup = false;
        }
        else
        {
            handup = true;
        }
        break;


    case 'w':
        if(winter)
        {
            winter = false;
        }
        else
        {
            winter = true;
        }
        break;

    case 'a':

        glutIdleFunc(spinDisplay);

        break;

    case 's':

        glutIdleFunc(NULL);

        break;


    case '+':
        spin_speed += 0.1f;
        break;


    case '-':
        spin_speed -= 0.1f;
        break;


    case 'c':
        glutIdleFunc(spinDisplayReverse);
        break;

        glutPostRedisplay();

    }

};


int main(int argc, char** argv)
{
    cout << " \n\t\t ** Welcome to Urban Majestic City **  " << endl;

    cout << " \t\t Press W -> To start/stop winter " << endl;
    cout << " \t\t Press D -> To shift to day " << endl;
    cout << " \t\t Press N -> To shift to night " << endl;
    cout << " \t\t Press H -> To hands up and down of police " << endl;
    cout << " \t\t Press A -> To start the Windmill(anticlockwise) " << endl;
    cout << " \t\t Press C -> To spin the Windmill(clockwise) " << endl;
    cout << " \t\t Press S -> To stop the Windmill " << endl;
    cout << " \t\t Press + -> To increase the speed of the Windmill(anticlockwise)" << endl;
    cout << " \t\t Press - -> To decrease the speed of the Windmill (anticlockwise)" << endl;


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize (1200, 720);
    glutInitWindowPosition (60, 80);

    glutCreateWindow ("Urban Majestic City");
    glutDisplayFunc(myDisplay);
    glutMouseFunc(mouse);
    glutTimerFunc(100, update, 0);

    glutKeyboardFunc(key);
    glutMainLoop();

    return 0;
}
