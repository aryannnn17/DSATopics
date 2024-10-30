#include "BST.h"

/* // Pointer concept
#include <iostream>
using namespace std;

int main()
{
    int b = 20;
    int *a = &b;
    cout << ++a << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << i << endl;
    }
}
 */

// Binary search
/* #include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &num, int target)
{
    int st = 0, end = num.size() - 1;
    int midPoint;
    while (st <= end)
    {
        midPoint = st + (end - st)/2;
        if (target < num.at(midPoint))
        {
            end = midPoint - 1;
        }
        else if (target > num.at(midPoint))
        {
            st = midPoint + 1;
        }
        else if (target == num.at(midPoint))
        {
            return midPoint;
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {-1, 0, 4, 7, 10, 14, 16};
    int t = -1;
    cout << binarySearch(a, t);
    return 0;
} */

/* // Binary search in rotated sorted array
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &num, int target)
{
    int st = 0, end = num.size() - 1;
    int midPoint;
    while (st <= end)
    {
        midPoint = st + (end - st) / 2;
        if (target == num.at(midPoint))
        {
            return midPoint;
        }
        if (num.at(st) <= num.at(midPoint))
        {
            if (num.at(st) <= target && target <= num.at(midPoint))
            {

                end = midPoint - 1;
            }
            else
            {
                st = midPoint + 1;
            }
        }
        else
        {
            if (num.at(midPoint) <= target && target <= num.at(end))
            {
                st = midPoint + 1;
            }
            else
            {
                end = midPoint - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {5, 6, 0, 1, 2, 3, 4};
    int t = 3;
    cout << binarySearch(a, t);
    return 0;
} */

// #include <bits/stdc++.h>
// using namespace std;

// int binarySearch(vector<int> &nums)
// {
//     if (nums.size() == 1)
//         return nums.at(0);
//     int st = 1, end = nums.size() - 2;
//     if (nums.at(st) != nums.at(0))
//         return nums.at(0);
//     if (nums.at(end) != nums.at(nums.size() - 1))
//         return nums.at(nums.size() - 1);

//     while (st <= end)
//     {
//         int mid = st + (end - st) / 2;
//         if (nums.at(mid) != nums.at(mid - 1) && nums.at(mid) != nums.at(mid + 1))
//         {
//             return nums.at(mid);
//         }
//         if (mid % 2 == 0)
//         {
//             if (nums.at(mid) == nums.at(mid - 1))
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 st = mid + 1;
//             }
//         }
//         else
//         {
//             if (nums.at(mid) == nums.at(mid - 1))
//             {
//                 st = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> a = {7, 7, 10, 11, 11, 12, 12};
//     cout << binarySearch(a);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int val)
//     {
//         this->data = val;
//         this->next = NULL;
//     }
// };
// int main()
// {
//     Node *temp = new Node(1);
//     Node *head = temp;

//     temp->next = new Node(1);
//     temp = temp->next;
//     cout<<(&head->next)+7<<endl;
//     while (head != NULL)
//     {
//         cout << &head->data  << " ";
//         head = head->next;
//     }
//     return 0;
// }

int main()
{
    // Node *root = NULL;
    // root = insertBST(root, 7);
    // insertBST(root, 4);
    // insertBST(root, 0);

    // insertBST(root, 5);
    // insertBST(root, 2);
    // insertBST(root, 8);
    // insertBST(root, 1);

    // inorder(root);

    // cout << endl;
    // if (searchInBST(root, 8) == NULL)
    // {
    //     cout << "Key doesn't exists" << endl;
    // }
    // else
    // {
    //     cout << "Key exists" << endl;
    // }

    // deleteInBST(root, 5);
    // deleteInBST(root, 8);
    // inorder(root);

    int preorder1[] = {1, 2, 4, 3, 5};
    int inorder1[] = {4, 2, 1, 5, 3};

    Node* root = buildTree(preorder1, inorder1, 0, 4);
    inorder(root);
    return 0;
    
}

// Hello, my name is Aryan Bhagat and I live in California, USA, the country in development. I'm applying for Financial Aid for the course Supervised Machine Learning: Regression and Classification because I do not have any special source of income and I don't earn enough money and I can't afford the full tuition at this time of my life and career. Receiving Financial Aid for this course will help me get valuable knowledge in Deep learning and Data Science, and This course will help me in achieve my professional goals and receiving financial aid will allow me to focus on my studies and by taking it to allow to take off a paid internship and can take another course in machine learning path . I want to invest in my career and my education, but at this moment I can only invest my time to increase my knowledge and advance in my career and not the money. Hopefully this will change in the upcoming years because I'm ambitious, I want to increase my programming knowledge and new technologies, I'm eager to work and to advance in my career.


Hello, My name is Aryan Bhagat and I'm studying at California State University, East Bay. I am looking to start a career in  Machine Learning and Deep Learning, so I am actively looking for a Machine Learning and Deep Learning internship role. I am currently pursuing several online courses from various platforms and am now building my online portfolio. This is one of the most important course Supervised Machine Learning: Regression and Classification I am taking now, and one of the most crucial skill sets that I need to develop to land an internship/ job. And, thus I need a course completion certificate to showcase the skillset I have gained through this course to a potential recruiter.

This course also has quite detailed and practical assignments, which will give me hands-on exposure to the same skill set that I need to gain. There are very few online hands-on practical courses out there, and this is one of them, so I do not want to miss out on learning from this one.

Moreover, there are peer-reviewed assignments in every single module of the course, which will give me varied perspectives on approaching the same problem and expand my learning horizon. Also, peers reviewing my approach will help me track my progress in what aspects of the skillset I need to focus on and what concepts I need to put more work on.

All in all, this course is a great learning opportunity for me. It will help me get my best foot forward and open doors for me in the Machine Learning and Deep Learning industry by landing my first role.