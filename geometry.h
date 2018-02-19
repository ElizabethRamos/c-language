#define PI 3.145787

float quad_area(float size)
{
    return size * size;
} 

float circ_area(float radius)
{
    return  PI * radius * radius;
}

float ret_area(float base, float height)
{
    return base * height;
}