// To-Do List
#include<iostream>
#include<windows.h> // This Header file includes System Calls such as CLS, PAUSE, COLOUR, etc

using namespace std;

void Display_Tasks(string Arr[], int iCount)                // Function to display tasks
{
    cout<<"\nTasks To Do : "<<endl;
    cout<<"------------------------------------"<<endl;
    for(int i = 0; i < iCount; i++)
    {
        cout<<"Task "<<i<<" : "<<Arr[i]<<endl;
    }
    cout<<"------------------------------------"<<endl;
}

void IsComplete(string Brr[], int iCount, int iVal)         // Function to display the task is completed
{
    cout<<"\nTasks To Do: "<<endl;
    cout<<"--------------------------------------------"<<endl;
    for(int i = 0; i < iCount; i++)
    {
        if(i == iVal)
        {
        cout<<"Task "<<i<<" : "<<Brr[i]<<" [Completed] "<<endl;
        }
    }
    cout<<"--------------------------------------------"<<endl;
    
}
int main()
{
    string tasks[10] = {""};     // Array of string
    int task_count = 0;          //How many tasks we have
    int Del_Task = 0;
    int Mark_Complete = 0;

    int option = -1;
    while(option != 0)
    {
        cout<<"------------------------To Do List------------------------"<<endl;
        cout<<"1. To Add New Task"<<endl;
        cout<<"2. To View Tasks"<<endl;
        cout<<"3. Delete the Tasks"<<endl;
        cout<<"4. Mark as completed"<<endl;
        cout<<"0. Terminate the program"<<endl;
        cout<<"Enter the Option : ";
        cin>>option;

        switch (option)
        {
        case 1:
            if(task_count > 9)
            {
                cout<<"---Task List is Full---"<<endl;
            }
            else
            {
                cout<<"Enter the New task: ";
                cin.ignore();
                getline(cin,tasks[task_count]);
                task_count++;
            }
            break;
        
        case 2:
            // system("cls");
            Display_Tasks(tasks,task_count);
            break;

        case 3:
            // system("cls");
            Display_Tasks(tasks,task_count);
            cout<<"Enter a Task to Delete : ";
            cin>>Del_Task;

            if(Del_Task < 0 || Del_Task > 9)
            {
                cout<<"You Entered Invalid Task Number:";
                break;
            }

            for(int i = Del_Task; i < task_count; i++)
            {
                tasks[i] = tasks[i+1];
            }
            task_count = task_count - 1;
            break;

        case 4:
            // system("cls");
            Display_Tasks(tasks,task_count);
            cout<<"Enter the Task that you want to mark complete : ";
            cin>>Mark_Complete;

            IsComplete(tasks,task_count,Mark_Complete);

            for(int i = Mark_Complete; i < task_count; i++)
            {
                tasks[i] = tasks[i+1];
            }
            task_count = task_count - 1;

            Display_Tasks(tasks,task_count);

            break;

        case 0:
            cout<<"Terminating the program.....";
            break;

        default:
            cout<<"You Entered Invalid choice"<<endl;
            break;
        }
    }
    return 0;
}