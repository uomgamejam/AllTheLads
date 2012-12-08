//
//  main.cpp
//  fallingBlocks
//
//  Created by Rui Teixeira on 08/12/12.
//  Copyright (c) 2012 Rui Teixeira. All rights reserved.
//

#include <iostream>

//includes for random function
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>


using namespace std;

int random(unsigned int number);
void addBlock();
void updateGame(){};
void displayGame(){};



int main(int argc, const char * argv[])
{
    //Initialize random seed
    srand(time (NULL));
    
    bool gameRunning = true;
    bool maxSpeed = false;
    
    
    unsigned int FPS = 1; //Game's FPS
    unsigned int minimumFramesBetweenBlocks = 4*FPS;
    unsigned int framesBetweenBlocks = (minimumFramesBetweenBlocks + random(3)) * FPS;
    unsigned int framesUntilBlocksSpeedChange = 30*FPS;
    
    //Keep track of frames to know when to add a block or 
    unsigned int currentFrame = 0;
    unsigned int lastBlockFrame = 0;
    
    
    while(gameRunning)
    { 
        if((currentFrame - lastBlockFrame) >= framesBetweenBlocks)
        {
            addBlock();
            lastBlockFrame = currentFrame; //save time of new block
            framesBetweenBlocks = (minimumFramesBetweenBlocks + random(3)); //set the time for next block
        }
        else
            cout << currentFrame << endl; //FOR TESTING ONLY
        
        if(!maxSpeed)
            if(currentFrame == framesUntilBlocksSpeedChange)
            {
                minimumFramesBetweenBlocks--; // decrease the frames between blocks
                framesBetweenBlocks = (minimumFramesBetweenBlocks + random(3)); //set the time for the next block
                currentFrame = 0; // reinitialize frame count
                
                if(minimumFramesBetweenBlocks == 1)
                    maxSpeed = true;
            }
           
        updateGame();
        displayGame();
        currentFrame++;
        
    }
    
}

//return a number from 0 to number-1
int random(unsigned int number){
    return rand() % number;
}

void addBlock(){
    cout << "Block Added" << endl;
}




