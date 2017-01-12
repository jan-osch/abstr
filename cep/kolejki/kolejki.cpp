//
// Created by Janusz Grzesik on 15.12.2016.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class MedianQueue {
    priority_queue<int, vector<int>, std::greater<int> >maxQueue;
    priority_queue<int> minQueue;


    void rebalance() {
        long balance = getBalance();

        if (balance == 0 || balance == -1 || balance == 1) {
            return;
        }

        if (balance == 2) {
            int elem = minQueue.top();
            minQueue.pop();
            maxQueue.push(elem);
            return;
        }

        if (balance == -2) {
            int elem = maxQueue.top();
            maxQueue.pop();
            minQueue.push(elem);
            return;
        }

        throw "Invalid balance";
    }

    long getBalance() const {
        long fir = minQueue.size();
        long sec = maxQueue.size();
        return fir - sec;
    }


public :

    void add(int elem) {
        if (minQueue.empty()) {
            return minQueue.push(elem);
        }

        if (minQueue.top() >= elem) {
            minQueue.push(elem);
        } else {
            maxQueue.push(elem);
        }

        rebalance();
    }

    float getMedian() {
        long balance = getBalance();

        if (balance == 0) {
            int first = minQueue.top();
            int second = maxQueue.top();

            return (first + second) / 2.0f;
        }

        if (balance == -1) { // maxQueue is bigger
            return maxQueue.top();
        }

        if (balance == 1) {
            return minQueue.top();
        }

        throw "Invalid balance";
    }
};


int main() {

    MedianQueue q;
    cout << "Welcome" << endl;

    q.add(5);
    cout << q.getMedian() << endl;

    q.add(8);
    cout << q.getMedian() << endl;

    q.add(9);
    cout << q.getMedian() << endl;

    q.add(5);
    cout << q.getMedian() << endl;

    q.add(11);
    cout << q.getMedian() << endl;

    q.add(1);
    cout << q.getMedian() << endl;

    q.add(1);
    cout << q.getMedian() << endl;

    return 0;
}