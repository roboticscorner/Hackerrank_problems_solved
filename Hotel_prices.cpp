#include <iostream>
#include <vector>
using namespace std;

class HotelRoom {
protected:
    int bedrooms;
    int bathrooms;

public:
    HotelRoom(int b, int ba) : bedrooms(b), bathrooms(ba) {}

    virtual int get_price() {
        return 50 * bedrooms + 100 * bathrooms;
    }
};

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int b, int ba) : HotelRoom(b, ba) {}

    int get_price() override {
        return HotelRoom::get_price() + 100;
    }
};

int main() {
    int n;
    cin >> n;
    vector<HotelRoom*> rooms;

    for (int i = 0; i < n; i++) {
        string room_type;
        int bedrooms, bathrooms;
        cin >> room_type >> bedrooms >> bathrooms;

        if (room_type == "standard") {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else if (room_type == "apartment") {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : rooms) {
        total_profit += room->get_price();
        delete room;
    }
    rooms.clear();

    cout << total_profit << endl;

    return 0;
}
