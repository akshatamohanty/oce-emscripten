#ifndef ToposhapeH
#define ToposhapeH
class Toposhape
{
  public:
      Standard_EXPORT Rectangle();
      Standard_EXPORT Rectangle( Standard_Real height, Standard_Real width );
      void set_values( Standard_Real a, Standard_Real b );
      Standard_Real area();
};
#endif
