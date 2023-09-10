#include <GL/glut.h>
#include <cmath>

const int numSegments = 100;

void drawCircle(float centerX, float centerY, float radius)
{
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < numSegments; ++i)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(numSegments);
        float x = centerX + radius * cos(theta);
        float y = centerY + radius * sin(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(1.5f, 0.5f, 0.5f);
    drawCircle(0.0f, 0.0f, 0.7f);



    glColor3f(1.0f, 1.0f, 0.0f);

    glBegin(GL_LINES);
    glVertex2f(-0.8f, 0.0f);
    glVertex2f(0.8f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.0f, 0.8f);
    glEnd();

    glRasterPos2f(0.47f, 0.03f);


    const char* text1 = "0 Degree";
    for (const char* c = text1; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(-.95f, 0.94f);



    const char* text2 = "Group Member:";
    for (const char* c = text2; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(-.86f, 0.86f);



    const char* text3 = "Md Shahriair Alam-20103204";
    for (const char* c = text3; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }

    glRasterPos2f(-.86f, 0.76f);



    const char* text4 = "Kawser Ahmed-20103262";
    for (const char* c = text4; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(0.08f, 0.9f);



    const char* text5= "Trigonometric Quadrant Angle Simulation";
    for (const char* c = text5; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }

    glRasterPos2f(0.05f, -0.1f);


    const char* text8 = "(0,0)";
    for (const char* c = text8; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(0.05f, 0.60f);

    const char* text9 = "All (+)";
    for (const char* c = text9; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }

    glRasterPos2f(0.05f, 0.5f);


    const char* text10 = "(90-x)";
    for (const char* c = text10; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(-0.38f, 0.55f);


    const char* text11 = "sin and cosec (+)";
    for (const char* c = text11; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(-0.3f, 0.48f);


    const char* text12= "(90+x)";
    for (const char* c = text12; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }

    glRasterPos2f(-0.3f, 0.4f);


    const char* text13 = "(180-x)";
    for (const char* c = text13; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(-0.64f, -0.08f);


    const char* text14 = "tan and cot (+)";
    for (const char* c = text14; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(-0.64f, -0.16f);


    const char* text15= "(180+x)";
    for (const char* c = text15; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }


    glRasterPos2f(-0.63f, -0.24f);


    const char* text16= "(270-x)";
    for (const char* c = text16; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }

    glRasterPos2f(0.025f, -0.45f);


    const char* text17= "cos and sec (+)";
    for (const char* c = text17; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }

    glRasterPos2f(0.025f, -0.55f);


    const char* text18= "(270+x)";
    for (const char* c = text18; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }

    glRasterPos2f(0.025f, -0.65f);


    const char* text19= "(360-x)";
    for (const char* c = text19; *c != '\0'; ++c)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
    }




    glFlush();
}


void keyboard(unsigned char key, int x, int y)
{


    if( key=='1')
    {
        //glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0.0f, 1.0f, 0.0f);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, 0.5f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.2f, 0.2f);

        glEnd();




        glRasterPos2f(0.3f, 0.1f);


        const char* text = "45-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }


        glRasterPos2f(0.05f, -0.1f);


        const char* text1 = "(0,0)";
        for (const char* c = text1; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }











        glFlush();

    }

    if( key=='2')
    {

        glColor3f(0.0f, 0.0f, 1.0f);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, 0.7f);

        glColor3f(0.0f, 0.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.2f);
        glVertex2f(0.2f, 0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.2f);
        glVertex2f(0.19f, 0.0f);
        glEnd();



        glRasterPos2f(0.2f, 0.3f);

        const char* text = "90-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }


        glRasterPos2f(0.05f, -0.1f);

        const char* text1 = "(0,0)";
        for (const char* c = text1; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }
        glRasterPos2f(0.05f, 0.60f);




        glFlush();


    }


    if( key=='3')
    {
        glColor3f(0.0f, 1.0f, 1.0f);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.5f, 0.5f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(0.2f, 0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.2f);
        glVertex2f(0.19f, 0.0f);
        glEnd();


        glRasterPos2f(0.2f, 0.3f);


        const char* text = "135-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }


        glRasterPos2f(0.05f, -0.1f);

        const char* text1 = "(0,0)";
        for (const char* c = text1; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }



        glFlush();



    }



    if( key=='4')
    {
        glColor3f(0.0f, 1.0f, 1.0f);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.65f, 0.0f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(0.2f, 0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.2f);
        glVertex2f(0.19f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(-0.19f, 0.2f);
        glVertex2f(-0.19f, 0.0f);
        glEnd();



        glRasterPos2f(0.1f, 0.3f);


        const char* text = "180-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }
        glRasterPos2f(0.05f, -0.1f);

        const char* text1 = "(0,0)";
        for (const char* c = text1; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }

        glRasterPos2f(-0.38f, 0.55f);



        glFlush();

    }
    if( key=='5')
    {
        glColor3f(0.0f, 1.0f, 1.0f);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.5f, -0.5f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(0.2f, 0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.2f);
        glVertex2f(0.19f, 0.0f);

        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(-0.2f, -0.2f);





        glEnd();




        glRasterPos2f(-0.3f, 0.25f);


        const char* text = "225-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }

        glRasterPos2f(0.05f, -0.1f);


        const char* text1 = "(0,0)";
        for (const char* c = text1; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }






        glFlush();





    }

    if( key=='6')
    {
        glColor3f(0.0f, 1.0f, 1.0f);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, -0.65f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(0.2f, 0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.2f);
        glVertex2f(0.19f, 0.0f);

        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.21f);
        glVertex2f(-0.2f, -0.2f);
        glBegin(GL_LINES);
        glVertex2f(-0.205f, -0.2f);
        glVertex2f(0.0f, -0.2f);

        glEnd();



        glRasterPos2f(-0.3f, 0.25f);


        const char* text = "270-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }



        glRasterPos2f(0.05f, -0.1f);


        const char* text1 = "(0,0)";
        for (const char* c = text1; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }
        glFlush();


    }

    if( key=='7')
    {
        glColor3f(0.0f, 1.0f, 1.0f);
        glLineWidth(6.0);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, -0.5f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);

        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(0.2f, 0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.2f);
        glVertex2f(0.19f, 0.0f);

        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.21f);
        glVertex2f(-0.2f, -0.2f);
        glBegin(GL_LINES);
        glVertex2f(-0.205f, -0.2f);
        glVertex2f(0.0f, -0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, -0.2f);
        glVertex2f(0.2f, -0.2f);
        glEnd();


        glRasterPos2f(-0.3f, 0.25f);




        const char* text = "315-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }
        glRasterPos2f(0.1f, -0.1f);

        glFlush();


    }
    if( key=='8')
    {

        glLineWidth(6.0);

        glColor3f(0.0f, 1.0f, 1.0f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.65f, 0.0f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.2f);
        glVertex2f(0.19f, 0.0f);

        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.21f);
        glVertex2f(-0.2f, -0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.0f, -0.2f);
        glVertex2f(0.2f, -0.2f);

        glBegin(GL_LINES);
        glVertex2f(-0.205f, -0.2f);
        glVertex2f(0.0f, -0.2f);

        glBegin(GL_LINES);
        glVertex2f(-0.2f, 0.2f);
        glVertex2f(0.2f, 0.2f);
        glBegin(GL_LINES);
        glVertex2f(0.19f, 0.0f);
        glVertex2f(0.19f, -0.2f);
        glEnd();



        glRasterPos2f(-0.3f, 0.25f);


        const char* text = "360-Degree";
        for (const char* c = text; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }
        glRasterPos2f(0.05f, -0.1f);


        const char* text1 = "(0,0)";
        for (const char* c = text1; *c != '\0'; ++c)
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c);
        }
        glFlush();

    }
    if( key=='0')
        exit(0);
}

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 700);
    glutCreateWindow("Simple Quadrant Angle Simulation");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}