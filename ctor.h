
class Ctor{
public:
    Ctor(){
        cout << "默认构造函数" << endl;
    }

    Ctor(const int val):val(val){
        cout << "默认构造携带参数：" << val << endl;
    }

    Ctor(const Ctor& myctor):val(myctor.val){
        cout << "拷贝构造函数：" << val << endl;
    }

    Ctor(Ctor&& myctor) noexcept:val(move(myctor.val)){
        cout << "移动构造函数：" << val << endl;
    }

    Ctor& operator=(const Ctor& myctor){
        if(this != &myctor){
            val = myctor.val;
            cout << "赋值构造函数：" << val << endl;
        }
        return *this;
    }

    Ctor& operator=(Ctor&& myctor) noexcept{
        if(this != &myctor){
            val = move(myctor.val);
            cout << "移动赋值构造函数：" << val << endl;
        }
        return *this;
    }

    ~Ctor(){
        cout << "析构函数" << endl;
    }


private:
    int val;
};