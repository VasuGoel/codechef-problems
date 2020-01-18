//
// Created by Vasu Goel on 1/14/20.
//

#include <iostream>
#include <vector>

void bubble_sort(int l[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(l[j] > l[j+1]) {
                int temp = l[j+1];
                l[j+1] = l[j];
                l[j] = temp;
            }
        }
    }
}

bool if_exists(int finished_tasks[], int m, int a) {
    for(int i = 0; i < m; i++) {
        if(finished_tasks[i] == a) {
            return true;
        }
    }
    return false;
}

void print_vector(std::vector<int> jobs) {
    for(int i = 0; i < jobs.size(); i++) {
        std::cout << jobs[i] << " ";
    }
    std::cout << std::endl;
}

int find_task_indices(int finished_tasks[], int n, int m) {
    char flag = 'c';
    std::vector<int> chef_jobs;
    std::vector<int> assistant_jobs;

    bubble_sort(finished_tasks, m);
    for(int i = 0; i < n; i++) {
        if (!if_exists(finished_tasks, m, i+1)) {
            if (flag == 'c') {
                chef_jobs.push_back(i+1);
                flag = 'a';
            } else {
                assistant_jobs.push_back(i+1);
                flag = 'c';
            }
        }
    }
    print_vector(chef_jobs);
    print_vector(assistant_jobs);
}

int main()
{
    int t, n, m;
    std::cin >> t;
    while(t > 0) {
        std::cin >> n >> m;
        int *finished_tasks = new int[m];
        for(int i = 0; i < m; i++)  std::cin >> finished_tasks[i];
        find_task_indices(finished_tasks, n, m);
        delete [] finished_tasks;
        t--;
    }
    return 0;
}
