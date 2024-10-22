/*
* Adrian's source file
*
* Make zombies that roam around the room in a random way, 
* look at asteroids and how it randomly moves around the room
*/

#include "header.h"

//extern Zombie zombie;

/*
//const int MAX_ZOMBIES = 2; //number of zombies
Zombie zombies[MAX_ZOMBIES];

//function for spawning zombies
void init_zombies(Zombie zombies[], int numZombies, Room r) { 
	//numZombies = MAX_ZOMBIES;
		for (int i = 0; i < numZombies; ++i) {
			zombies[i].pos[0] = 300.0f + (i * 50.0f);
			zombies[i].pos[1] = 300.0f;
			//zombies[i].pos[2] = 0.0f;
			zombies[i].id = i;
		}
}
*/

std::vector<Zombie> zombies = {
	Zombie(0, 300.0f, 300.0f, 0),
	Zombie(0, 350.0f, 300.0f, 0)
};

//Drawing/Rendering Zombies
void renderZombie(int numZombies, Room r) 
{
	for (int i = 0; i < numZombies; i++) {
		if (zombies[i].room == r.id) {
			glPushMatrix();
			glTranslatef(zombies[i].pos[0], zombies[i].pos[1], zombies[i].pos[2]);
			glRotatef(zombies[i].angle, 0.0f, 0.0f, 1.0f);
			float size = 9.0f;
			glBegin(GL_QUADS);
				glColor3f(0.0f, 1.0f, 0.0f);
				glVertex3f(size, size, 0.0f); //top right
				glVertex3f(size, -size, 0.0f); //bottom right
				glVertex3f(-size, -size, 0.0f); //bottom left
				glVertex3f(-size, size, 0.0f); //top left
			glEnd();

			glBegin(GL_POINTS);
			glVertex2f(0.0f, 0.0f);
			glEnd();
			glPopMatrix();
		}
	}
}


