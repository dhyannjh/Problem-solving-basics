#include <iostream>
#include <vector>
#include <string>

bool containsVector(const std::vector<std::vector<int>>& combos,
    const std::vector<int>& target) {

    for (const auto& vec : combos) {
        if (vec == target) {
            return true;
        }
    }
    return false;
}

void generate_combo(int n, std::vector<std::vector<int>>& combos) {
    
    combos.reserve(2000000);

    if (n <= 0) {
        return;
    }

    generate_combo(n - 1, combos);

    if (n == 1) {

        combos.resize(combos.size() * 2 + 1);
        combos[0].emplace_back(1);
    }

    else {
        std::vector<int> temp;
        
        int og_size = combos.size();
        for (int i = 0; i < og_size; i++) {

            const std::vector<int>& base = combos[i];
            temp = base;
            temp.pop_back();

            int last = combos[i].back();

            if (last == 1) {
                temp.push_back(2);
            }
            else if (last == 2) {
                temp.push_back(3);
            }
            else if (last == 3) {
                temp.push_back(2);
                temp.push_back(2);
            }

            if (!containsVector(combos, temp)) {
                combos.push_back(temp);
            }

            combos[i].push_back(1);

        }
    }
    return;
}

int sum(std::vector<int> vect) {
    int ans = 0;

    for (int x : vect) {
        ans += x;
    }

    return ans;
}

void removeBroken(std::vector<std::vector<int>>& combos, int broken = 7) {

    bool remove = false;
    int Sum = 0;
    for (int y = 0; y < combos.size(); ) {
        remove = false;
        Sum = 0;
        for (int x = 0; x < combos[y].size(); x++) {
            Sum += combos[y][x];
            if (Sum == broken-1) {
                remove = true;
            }
        }
        if (remove == true) {
            combos.erase(combos.begin() + y);
        }
        else {
            y++;
        }
    }
}

int main()
{
    std::vector<std::vector<int>> combos;
    int n = 8;

    generate_combo(n, combos);
    int num = 0;

    removeBroken(combos);

    for (std::vector<int> y : combos) {

        for (int x : y) {
            std::cout << x;
            num++;
        }

        std::cout << std::endl;
    }

    std::cout << "\nNumber of combos = " << num << " For " << n << " steps." << std::endl;
  
    return 0;
}
