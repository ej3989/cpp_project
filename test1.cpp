#include <iostream>
#include<vector>


friend std::ostream & operator << (std::ostream & out, const Vector2<T> & vec)
{
      out << vec.x << " " << vec.y;
      return out;
}