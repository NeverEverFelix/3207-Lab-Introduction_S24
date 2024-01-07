//
//  random.c
//  
//
//  Created by Felix M on 1/18/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random.h>

char randomchar(){
    
    char randomletter = 'A' + (random() % 26);
    return randomletter;
}
