//
//  BinaryTree.h
//  Binary tree
//
//  Created by Эльдар Дамиров on 08.04.2018.
//  Copyright © 2018 Эльдар Дамиров. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h


#endif /* BinaryTree_h */


enum directions
    {
    left = 0, 
    right = 1
    };


template <typename typeOfData> struct node
    {
    typeOfData value = NULL;
    
    node <typeOfData> *left = nullptr;
    node <typeOfData> *right = nullptr;
    node <typeOfData> *upwards = nullptr;
    };
    
    
    
template <typename typeOfData> class BinaryTree  
    {
    public:
        BinaryTree()
            {
            root = nullptr;
            
            init();
            }
            
        ~BinaryTree()
            {
            
            }
            
        void switchToNode ( node <typeOfData>* newNode )
            {
            currentNode = newNode;
            }
  
    
    private:
        node <typeOfData> *root = nullptr;
        node <typeOfData> *currentNode = nullptr;
        
    
        void init()  
            {
            currentNode = root;
            }
    
    
        void createBranch ( int direction, typeOfData newValue = NULL )
            {
            node <typeOfData> *newNode = new node <typeOfData>;
            
            newNode->upwards = currentNode;
            newNode->value = newValue;
            
            if ( direction == left )
                {
                currentNode->left = newNode;
                }
            else
                {
                currentNode->right = newNode;
                }
            
            switchToNode ( newNode );
            }
            
  
  
    };


