//
//  main.cpp
//  Binary tree
//
//  Created by Эльдар Дамиров on 08.04.2018.
//  Copyright © 2018 Эльдар Дамиров. All rights reserved.
//

#include <iostream>

#include "BinaryTree.h"

int main() 
    {
    BinaryTree <int> myTree;
    
    myTree.setValueOfLeftNode ( 0, true );
    myTree.setValueOfRightNode( 1 );  
    myTree.switchToNode ( left );  
    myTree.setValueOfLeftNode ( 2, false );
    myTree.setValueOfRightNode ( 3, true );
        
    printf ( "%d\n", myTree.getCurrentNodeValue() );
    
    myTree.switchToNode ( upwards );
    
    printf ( "%d %d\n", myTree.currentNode->left->value, myTree.currentNode->right->value );

        
    printf ( "%d\n", myTree.getCurrentNodeValue() );
    
    myTree.switchToNode ( upwards );
    
    printf ( "%d %d\n", myTree.currentNode->left->value, myTree.currentNode->right->value );
    
    printf ( "%d\n", myTree.getCurrentNodeValue() );
    
    return 0;
    }
