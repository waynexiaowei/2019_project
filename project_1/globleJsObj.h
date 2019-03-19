#ifndef  JSOBJECT_H_
#define  JSOBJECT_H_

#include <map>
#include <string>

//byzxy JS to cobalt.so

//单个js对象(LoginAPI,OpenAPI...)的方法数量,方法名列表
struct js_obj
{
  //std::string js_name;
  int func_num;
  std::map<int, std::string> mapJsFunc;;
};

//扩展对象的数量和扩展对象的列表
struct js_all_obj
{
  int obj_num;
  //js_obj *jsObj;
  std::map<int, std::string> mapJsObj;
};

//（mapJsObjFunc[0].func_num = 3, mapJsObjFunc[0].mapJsFunc[0] = "getCid";mapJsObjFunc[0].mapJsFunc[1] = "getToken"...）
extern std::map<int, struct js_obj > mapJsObjFunc;

//(allJsObject.obj_num = 6, allJsObject.mapJsObj[0]="LoginAPI" allJsObject.mapJsObj[1]="OpenAPI"...)
extern struct js_all_obj allJsObject;  

//feflect object by method name
extern "C" int reflectObjectIndex(std::string methodName);

//extern "C" int reflectMaxFuncNum(); 
//extern struct js_obj jsObj[100]; 
//End JS
#endif  //JSOBJECT_H_