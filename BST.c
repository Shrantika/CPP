#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
struct Node* InsertNode(struct Node* root, int data)
{
	if(root == NULL)
	{
		return createNode(data);
	}
	if(data < root->data)
	{
		root->left = InsertNode(root->left,data);
	}
	else if(data > root->data)
	{
		root->right = InsertNode(root->right,data);
	}
	return root;
}
struct Node* findMin(struct Node* root)
{
	while(root->left  != NULL)
	{
		root = root->left;		
	}
	return root;
}
struct Node* DeleteNode(struct Node* root, int data)
{
	if(root == NULL)
	{
		return root;
	}
	if(data < root->data)
	{
		root->left = DeleteNode(root->left,data);
	}
	else if(data > root->data)
	{
		root->right = DeleteNode(root->right,data);
	}
	else
	{
		if(root->left == NULL)
		{
			struct Node* temp = root->right;
			free(root);
			return temp;
		}
		else if(root->right == NULL)
		{
			struct Node* temp = root->left;
			free(root);
			return temp;
		}
		struct Node* temp = findMin(root->right);
		root->data = temp->data;
		root->right = DeleteNode(root->right,temp->data);
	}
	return root;
}
void inorder(struct Node* root)
{
	if(root != NULL)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
void preorder(struct Node* root)
{
	if(root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}
void postorder(struct Node* root) 
{
    if (root != NULL) 
	{
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
	struct Node* root = NULL;
	int choice,value;
	do
	{
		printf("\n--- Binary Search Tree Operations ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Inorder Traversal\n");
        printf("4. Preorder Traversal\n");
        printf("5. Postorder Traversal\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
        	case 1:
        		printf("Enter value to insert : ");
        		scanf("%d",&value);
        		root = InsertNode(root,value);
        		break;
        	case 2:
        		printf("Enter value to delete : ");
        		scanf("%d",&value);
        		root = DeleteNode(root,value);
        		break;
        	case 3:
        		printf("Inorder traversal : ");
        		inorder(root);
        		printf("\n");
        		break;
        	case 4 :
        		printf("Preorder traversal : ");
        		preorder(root);
        		printf("\n");
        		break;
        	 case 5:
                printf("Postorder Traversal: ");
                postorder(root);
                printf("\n");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
            
		}
	}while(choice != 6);
	return 0;
}
