# 4-u-duotis
Vektorius
### Testavimas
```shell
1000000 studentu std::vector <int> push backinimo trukme: 0.0099990 s
1000000 studentu Vector <int> push backinimo trukme: 0.0104430 s

----------------------------------------------------------------------------

1000000 studentu std::vector <stud> push backinimo trukme: 2.0650360 s
1000000 studentu Vector <stud> push backinimo trukme: 2.0595230 s
```

### Vektorius
```shell
size_t size() const { return vsize_; }
size_t capacity() const { return cap_; }

bool empty()
    {
        if (vsize_ == 0)
            return true;
        else
            return false;
    }

void assign(size_t val, T data) {
        vsize_ = val;
        cap_ = val;
        delete[] arr_;
        T * other = new T[vsize_];
        std::fill_n(other, vsize_, data);
        arr_ = other;
    }
       void erase(size_t val) {
        if (val < 0 || val >= vsize_)
            return;
        vsize_--;
        std::move(&arr_[val + 1], &arr_[vsize_], &arr_[val]);
    }

    void clear()
    {
        vsize_ = 0;
        delete[] arr_;
        arr_ = new T[cap_];
    }

        void push_back(T data) {
        if (vsize_ >= cap_){
            resize(vsize_*2);
        }
        arr_[vsize_] = data;
        vsize_++;
    }
  void pop_back()
    {
        vsize_ = vsize_ - 1;
        T *laikinas = new T[vsize_];
        for (size_t i = 0; i < vsize_; i++)
            laikinas[i] = arr_[i];
        delete[] arr_;
        arr_ = laikinas;
    };
iterator resize(size_t dydis) {
        if (dydis == 0) {
            vsize_ = 0;
            cap_ = 2;
            T *other = new T[cap_];
            delete[] arr_;
            arr_ = other;
            return 0;
        }
        size_t lim;
        T *other = new T[dydis];
        if (dydis < vsize_) {
            vsize_ = dydis;
            lim = dydis;
        }
        else lim = vsize_;
        std::move(&arr_[0], &arr_[lim], other);
        cap_ = dydis;
        delete[] arr_;
        arr_ = other;
    }

};
```
