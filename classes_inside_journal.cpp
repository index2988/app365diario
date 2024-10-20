#include <vector>
#include <cmath>
#include <windows.h>

#define pages_number 366

enum{insert_keyvalue = 73};

class window{
    public:
        page current_page;
    private:
        int current_cursor_x_pos;
        int current_cursor_y_pos;

};


class page{
    private:
        int x_length_px = 700;
        int y_length_px = 1200;
    public:
        void insert_mode(int key_value){
            if(key_value != insert_keyvalue) return;

        }

};

class text_section{ 
    int current_line_number;
    static const short max_lines_num;


};

const short text_section::max_lines_num;
