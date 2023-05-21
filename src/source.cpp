#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>
#include <sstream>
#include <functional>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <map>
#include <string>

using namespace std;
using namespace sf;

//�������

//��������� � ������
template<typename T>
string convert_to_string(const T&);

//������ ����� �������
void function_point_cloud
(
    const function<double(double)>& f,
    vector<pair<double, double>>& v,
    const double& min,
    const double& max,
    const double& step
);

//������ ����� ��������������� �������
void parametric_function_point_cloud
(
    const function<pair<double, double>(double)>& f,
    vector<pair<double, double>>& v,
    const double& t_max,
    const double& step
);
// ������� y: 1:10 000!
//��������� �������
Image graph_builder
(
    const vector<vector<pair<double, double>>>& Data_,
    const double& limit_x0,
    const double& limit_x1,
    const double& limit_y0,
    const double& limit_y1,
    const double& step_x,
    const double& step_y,
    const vector<Color>& colors,
    const string& type,
    const string& win_name,
    const size_t& sz_win_x,
    const size_t& sz_win_y,
    const size_t& margin,
    const size_t& marker_size,
    const int& shift_of_axis_x,
    const int& shift_of_axis_y,
    const size_t& thickness_axis,
    const string& x_name,
    const string& y_name,
    const Color& color_axis,
    const Color& color_auxiliary,
    const size_t& thickness_auxiliary_line,
    const size_t& font_size
);

int main()
{
   // sf::RenderWindow window(sf::VideoMode(1400, 1000), "SFML");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("color 0A");

    //+++++�������
    //������ ��� �������
    function<double(double)> f;
    //������ ��� ��������������� �������
    function<pair<double, double>(double)> fp;
    //����������
    //����� �������
    vector<vector<pair<double, double>>> funcs;
    //����� ����� �������
    vector<pair<double, double>> Data_;
    //������������ ������� ��������� ��������
    float x_min = -1,
        x_max = 17,
        step = 1,
        min_y = -1,
        max_y = 10,
        step1 = 0.3;

    //������� ������ ����� �������� ��� ������� � ������� ���������� �� ������� ����� � ����������
    vector<Color> colors;
     colors.push_back(Color(0, 255, 0));
    colors.push_back(Color(255, 0, 0));
    colors.push_back(Color(255, 255, 0));
    colors.push_back(Color(150, 75, 0));
    colors.push_back(Color(225, 165, 0));
    colors.push_back(Color(66, 170, 255));   

    
    //ChoiceSort ������ �����
    Data_.clear();          
    fp = [](float  t)
    {
        float  x = 0.7*t;
        float  y =  3.5*t;
        return make_pair(x, y);
       
    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 0.8;
        float  y = 5;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 3.57;
        float  y = 10;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    funcs.push_back(Data_);
    //BubbleSort ������� �����
    Data_.clear();
    fp = [](float  t)
    {
        float  x = 0.9 * t;
        float  y = 3.5 * t;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 3.91;
        float  y = 5;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 16.69;
        float  y = 10;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    funcs.push_back(Data_);
    //InsertSort ����� �����
    Data_.clear();
    fp = [](float  t)
    {
        float  x = 0.6 * t;
        float  y = 3.5 * t;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 0.931;
        float  y = 5;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 3.623;
        float  y = 10;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    funcs.push_back(Data_);
    //MergeSort ���������� �����
    Data_.clear();
    fp = [](float  t)
    {
        float  x = 0.3 * t;
        float  y = 3.5 * t;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 0.1;
        float  y = 5;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 0.019;
        float  y = 10;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    funcs.push_back(Data_);
    //QuickSort ��������� �����
    Data_.clear();
    fp = [](float  t)
    {
        float  x = 0.1 * t;
        float  y = 3.5 * t;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 0.1;
        float  y = 5;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    fp = [](float  t)
    {
        float  x = 0.44;
        float  y = 10;
        return make_pair(x, y);

    };
    parametric_function_point_cloud(fp, Data_, 0.5, step1);
    funcs.push_back(Data_);
      
    //��������� ������ ��������
    auto img_graph = graph_builder
    (
        funcs,
        
        
        x_min,
        x_max,
        min_y,
        max_y,
        1.,
        1.,
        colors,
        "line",
        "Graphic",
        1400u,
        900u,
        20u,
        3u,
        0,
        0,
        3u,
        "x",
        "y",
        Color::Black,
        Color::Blue,
        1u,
        18u
    );
    img_graph.saveToFile("Graph.jpg");

    system("pause");
    return 0;
}

//+++++�������

//��������� � ������
template<typename T>
string convert_to_string(const T& value)
{
    stringstream ss;
    string output;
    ss << value;
    ss >> output;
    return output;
}

//������ ����� �������
void function_point_cloud
(
    const function<double(double)>& f,
    vector<pair<double, double>>& v,
    const double& min,
    const double& max,
    const double& step
)
{
    for (double u = min; u <= max; u += step)
    {
        v.push_back(make_pair(u, f(u)));
    }
}

//������ ����� ��������������� �������
void parametric_function_point_cloud
(
    const function<pair<double, double>(double)>& f,
    vector<pair<double, double>>& v,
    const double& t_max,
    const double& step
)
{
    for (double u = 0.0; u <= t_max; u += step)
    {
        v.push_back(make_pair(f(u).first, f(u).second));
    }
}

//��������� �������
static Image graph_builder
(
    const vector<vector<pair<double, double>>>& Data_,
    const double& limit_x0,
    const double& limit_x1,
    const double& limit_y0,
    const double& limit_y1,
    const double& step_x,
    const double& step_y,
    const vector<Color>& colors,
    const string& type,
    const string& win_name,
    const size_t& sz_win_x,
    const size_t& sz_win_y,
    const size_t& margin,
    const size_t& marker_size,
    const int& shift_of_axis_x,
    const int& shift_of_axis_y,
    const size_t& thickness_axis,
    const string& x_name,
    const string& y_name,
    const Color& color_axis,
    const Color& color_auxiliary,
    const size_t& thickness_auxiliary_line,
    const size_t& font_size
)
{
    //����� ��
    double pi = atan(1.) * 4.;

    //��������
    Image img;

    //��� ����
    //string win_name = window_name;

    //������� ����
    //int sz_win_x = window_size_x; //1350
    //int sz_win_y = window_size_y; //1020

    //�����
    //int margin = 20;

    //������ �������
    //size_t marker_size = 5u;

    //�������� ������ ������� ���������
    int shift_of_center_x = static_cast<double>(sz_win_x) / 14.9;
    int shift_of_center_y = static_cast<double>(sz_win_y) / 1.125;

    //�������� ���� ��������� �� ������ �������
    //int shift_of_axis_x = 0;
    //int shift_of_axis_y = 0;

    //������� ����
    //unsigned thickness_axis = 3;

    //������� ����� ��������
    size_t thickness_gr = marker_size;

    //���� ����
    //Color color_axis(Color::White);

    //�������� ����
    //string x_name = "x";
    //string y_name = "y";

    //���� ��������������� �����
    //Color color_auxiliary(Color::Cyan);

    //������� ��������������� �����
    //unsigned thickness_auxiliary_line = 1;

    //������������ ��������������� ������ �� ����
    //double scale_factor_x = 1.0;
    //double scale_factor_y = 1.0;

    //���� �������
    Color color_graph;

    //��������� �������� �� ����
    //double limit_x0 = -10;
    //double limit_x1 = 10;
    //double limit_y0 = -5;
    //double limit_y1 = 5;

    //���� ������� �� ����
    //double step_x = 1.;
    //double step_y = 1.;

    RenderWindow window(VideoMode(sz_win_x, sz_win_y), win_name);

    cout << "����� ��������� ���������� ���������� �������� ����� ��������� ���� ������� (������� ��������)" << endl;
    cout << endl;

    //������ � ����
    while (window.isOpen())
    {
        //�������
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear(Color::White);

        unsigned NULL_x = 40;
        int st_y = 805;

        //�������� �������
        sf::Font font;
        if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
        {
            cout << "������ ������ ������" << endl;
        }
        Text text;
        text.setFont(font);
        text.setCharacterSize(font_size); //� ��������, � �� ������!
        text.setFillColor(sf::Color::Black);
        text.setStyle(sf::Text::Bold);

        //������������� ����

        //������������� �������������� ���
        RectangleShape rectangle0;
        rectangle0.setFillColor(color_axis);

        //��������� Y
        rectangle0.setPosition(shift_of_center_x + shift_of_axis_y, margin);
        rectangle0.setSize(Vector2f(thickness_axis, sz_win_y - 2 * margin));
        window.draw(rectangle0);

        //����������� X
        rectangle0.setPosition(margin, shift_of_center_y + shift_of_axis_x);
        rectangle0.setSize(Vector2f(sz_win_x - 2 * margin, thickness_axis));
        window.draw(rectangle0);

        //�������� ������������ ���
        unsigned count_marker_y = static_cast<double>(limit_y1 - limit_y0) / step_y;
        unsigned len_axis_y = sz_win_y - 2 * margin;
        for (unsigned u = 0; u <= count_marker_y; ++u)
        {
            //�����
            text.setString(convert_to_string(limit_y0 + (count_marker_y - u) * step_y));
            text.setPosition(shift_of_center_x + shift_of_axis_y -25, (static_cast<double>(len_axis_y) / count_marker_y) * u + margin - 10);
            window.draw(text);

            //��������������� ����� �����
            //������������� �������������� ��������������� ����� �����
            rectangle0.setFillColor(color_auxiliary);
            //������������
            rectangle0.setPosition(shift_of_center_x - margin + 15 + shift_of_axis_y, (static_cast<double>(len_axis_y) / count_marker_y) * u + margin);
            rectangle0.setSize(Vector2f(11, thickness_auxiliary_line * 2));
            window.draw(rectangle0);
            //��������������
            rectangle0.setPosition(margin, (static_cast<double>(len_axis_y) / count_marker_y) * u + margin);
            rectangle0.setSize(Vector2f(sz_win_x - 2 * margin, thickness_auxiliary_line));
        //  window.draw(rectangle0);
        }

        //�������� �������������� ���
        unsigned count_marker_x = static_cast<double>(limit_x1 - limit_x0) / step_x;
        unsigned len_axis_x = sz_win_x - 2 * margin;
        for (unsigned u = 0; u <= count_marker_x; ++u)
        {
            //�����
            text.setString(convert_to_string(limit_x0 + u * step_x));
            text.setPosition((static_cast<double>(len_axis_x) / count_marker_x) * u + margin, shift_of_center_y + shift_of_axis_x + 15);
            window.draw(text);

            //��������������� ����� �����
            rectangle0.setPosition((static_cast<double>(len_axis_x) / count_marker_x) * u + margin, shift_of_center_y - margin + 15 + shift_of_axis_x);
            rectangle0.setSize(Vector2f(thickness_auxiliary_line * 2, 11));
            window.draw(rectangle0);

            rectangle0.setPosition((static_cast<double>(len_axis_x) / count_marker_x) * u + margin, margin);
            rectangle0.setSize(Vector2f(thickness_auxiliary_line, sz_win_y - 2 * margin));
         // window.draw(rectangle0);
        }

        //������� ��� ����

        //X
        text.setString(x_name);
        text.setPosition(sz_win_x - margin -15, shift_of_center_y + shift_of_axis_x - 25);  
        window.draw(text);

        //Y
        text.setString(y_name);
        text.setPosition(shift_of_center_x + shift_of_axis_y + 7, sz_win_y - margin - 880);
        window.draw(text);

        //��������� �������

        //������������ ��������������� �� ����
        double scaling_factor_x = static_cast<double>(sz_win_x - 2 * margin) / (limit_x1 - limit_x0); //������ � ������
        double scaling_factor_y = static_cast<double>(sz_win_y - 2 * margin) / (limit_y1 - limit_y0);

        auto colors0 = colors;

        for (auto g : Data_)
        {
            color_graph = colors0[0];
            colors0.erase(colors0.begin());
            pair<double, double> old;
            bool trigger = true;
            for (auto pr : g)
            {
                if (trigger)
                {
                    trigger = false;
                }
                else
                {

                    double point_x_old = (old.first - limit_x0) * scaling_factor_x + margin;
                    double point_y_old = sz_win_y + (limit_y0 - old.second) * scaling_factor_y - margin;

                    if (type == "line")
                    {
                        double point_x_next = (pr.first - limit_x0) * scaling_factor_x + margin;
                        double point_y_next = sz_win_y + (limit_y0 - pr.second) * scaling_factor_y - margin;

                        double len = sqrt(pow((point_x_next - point_x_old), 2) + pow((point_y_next - point_y_old), 2));
                        sf::RectangleShape line(sf::Vector2f(len, thickness_gr));
                        line.setPosition(point_x_old, point_y_old);
                        double ang = (asin((point_y_next - point_y_old) / len) / pi) * 180;
                        line.rotate(ang);
                        line.setFillColor(color_graph);
                        window.draw(line);
                    }
                    else if (type == "points")
                    {
                        sf::CircleShape shape(marker_size);
                        shape.setPosition(point_x_old - marker_size, point_y_old - marker_size);
                        shape.setFillColor(color_graph);
                        window.draw(shape);
                    }
                }
                old = pr;
            }
        }

        //����� �������
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
            {
                img = window.capture();
                window.close();
                break;
            }
            default:
                break;
            }
        }

        //����������� ������� � ����
       // window.clear(Color::White);
        window.display();
    }

    cout << "������ ������� ��������" << endl;
    cout << endl;
    return img;
}
