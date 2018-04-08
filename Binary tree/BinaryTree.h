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
    right = 1,
    upwards = 2
    };


//------------------------------------------------------------------------------------

template <typename typeOfData> struct node
    {
    typeOfData value = NULL;
    
    node <typeOfData> *left = nullptr;
    node <typeOfData> *right = nullptr;
    node <typeOfData> *upwards = nullptr;
    };
    

//------------------------------------------------------------------------------------    
    
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
        
        
        
        //------------------------------------------------------------------------------------
        
        void switchToNode ( node <typeOfData>* newNode )
            {
            currentNode = newNode;
            }
            
        void switchToNode ( int direction )
            {
            if ( direction == left )
                {
                if ( currentNode->left == nullptr )
                    {
                    createNode ( left );
                    }
                    
                currentNode = currentNode->left;
                }
            else if ( direction == right )
                {
                if ( currentNode->right == nullptr )
                    {
                    createNode ( right );
                    }
                    
                currentNode = currentNode->right;
                }
            else
                {
                if ( currentNode->upwards != nullptr )
                    {
                    currentNode = currentNode->right;
                    }
                }
            
            }
            
        //------------------------------------------------------------------------------------
            
        void setValueOfCurrentNode ( typeOfData newValue )
            {
            currentNode->value = newValue;
            }
           
            
        void setValueOfLeftNode ( typeOfData newValue, bool switchToLeftNode = false )
            {
            if ( currentNode->left == nullptr )
                {
                createNode ( left );
                }
            
            currentNode->left->value = newValue;
            
            if ( switchToLeftNode == true )
                {
                currentNode = currentNode->left;
                }
            
            }
            
        void setValueOfRightNode ( typeOfData newValue, bool switchToRightNode = false )
            {
            if ( currentNode->right == nullptr )
                {
                createNode ( right );
                }
            
            currentNode->right->value = newValue;
            
            if ( switchToRightNode == true )
                {
                currentNode = currentNode->right;
                }
            }
            
        void setValueOfUpwardNode ( typeOfData newValue, bool switchToUpwardsNode = false )
            {
            if ( currentNode->upwards == nullptr )
                {
                createNode ( upwards );
                }
            
            currentNode->upwards->value = newValue;
            
            if ( switchToUpwardsNode == true )
                {
                currentNode = currentNode->upwards;
                }
            }
            
        //------------------------------------------------------------------------------------
        
            
  
    
    private:
        node <typeOfData> *root = nullptr;
        node <typeOfData> *currentNode = nullptr;
        
    
        void init()  
            {
            currentNode = root;
            }
    
    
        void createNode ( int direction, typeOfData newValue = NULL )
            {
            node <typeOfData> *newNode = new node <typeOfData>;
            
            newNode->upwards = currentNode;
            newNode->value = newValue;
            
            if ( direction == left )
                {
                currentNode->left = newNode;
                }
            else if ( direction == right )
                {
                currentNode->right = newNode;
                }
            else 
                {
                currentNode->upwards = newNode;
                }
            
            }
            
  
  
    };
    
//------------------------------------------------------------------------------------


