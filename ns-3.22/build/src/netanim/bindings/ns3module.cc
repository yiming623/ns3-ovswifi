#include "ns3module.h"
static PyMethodDef netanim_Config_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3ConfigMatchContainer_Type;
std::map<void*, PyObject*> *_PyNs3ConfigMatchContainer_wrapper_registry;

/* --- containers --- */



static void
Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_clear(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_traverse(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt____tp_dealloc(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_dealloc(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt____tp_iter(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__ *self)
{
    Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter, &Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< ns3::Ptr< ns3::Object > >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_iter(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_iternext(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< ns3::Ptr< ns3::Object > >::iterator iter;
    PyNs3Object *py_Object;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    if (!(const_cast<ns3::Object *> (ns3::PeekPointer ((*iter))))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    if (typeid((*const_cast<ns3::Object *> (ns3::PeekPointer ((*iter))))).name() == typeid(PyNs3Object__PythonHelper).name())
    {
        py_Object = reinterpret_cast< PyNs3Object* >(reinterpret_cast< PyNs3Object__PythonHelper* >(const_cast<ns3::Object *> (ns3::PeekPointer ((*iter))))->m_pyself);
        py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer ((*iter)));
        Py_INCREF(py_Object);
    } else {
        wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::Object *> (ns3::PeekPointer ((*iter))));
        if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
            py_Object = NULL;
        } else {
            py_Object = (PyNs3Object *) wrapper_lookup_iter->second;
            Py_INCREF(py_Object);
        }
    
        if (py_Object == NULL) {
            wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Object *> (ns3::PeekPointer ((*iter))))), &PyNs3Object_Type);
            py_Object = PyObject_GC_New(PyNs3Object, wrapper_type);
            py_Object->inst_dict = NULL;
    
            py_Object->inst_dict = NULL;
            py_Object->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
            const_cast<ns3::Object *> (ns3::PeekPointer ((*iter)))->Ref();
            py_Object->obj = const_cast<ns3::Object *> (ns3::PeekPointer ((*iter)));
            PyNs3ObjectBase_wrapper_registry[(void *) py_Object->obj] = (PyObject *) py_Object;
        }
    }
    py_retval = Py_BuildValue((char *) "N", py_Object);
    return py_retval;
}

int _wrap_convert_py2c__ns3__Ptr__lt___ns3__Object___gt__(PyObject *value, ns3::Ptr< ns3::Object > *address)
{
    PyObject *py_retval;
    PyNs3Object *tmp_Object;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Object_Type, &tmp_Object)) {
        Py_DECREF(py_retval);
        return 0;
    }
    // dangerous!
    *address = ns3::Ptr< ns3::Object  > (tmp_Object->obj);
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__(PyObject *arg, std::vector< ns3::Ptr< ns3::Object > > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt___Type)) {
        *container = *((Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Ptr< ns3::Object > item;
            if (!_wrap_convert_py2c__ns3__Ptr__lt___ns3__Object___gt__(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__ instance, or a list of ns3::Ptr< ns3::Object >");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt____tp_init(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< ns3::Ptr< ns3::Object > >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Config.Std__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Config.Std__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___std__string___gt__Iter__tp_clear(Pystd__vector__lt___std__string___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___std__string___gt__Iter__tp_traverse(Pystd__vector__lt___std__string___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___std__string___gt____tp_dealloc(Pystd__vector__lt___std__string___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___std__string___gt__Iter__tp_dealloc(Pystd__vector__lt___std__string___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___std__string___gt____tp_iter(Pystd__vector__lt___std__string___gt__ *self)
{
    Pystd__vector__lt___std__string___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___std__string___gt__Iter, &Pystd__vector__lt___std__string___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< std::string >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___std__string___gt__Iter__tp_iter(Pystd__vector__lt___std__string___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___std__string___gt__Iter__tp_iternext(Pystd__vector__lt___std__string___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< std::string >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "s#", ((*iter)).c_str(), ((*iter)).size());
    return py_retval;
}

int _wrap_convert_py2c__std__string(PyObject *value, std::string *address)
{
    PyObject *py_retval;
    const char *retval_ptr;
    Py_ssize_t retval_len;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "s#", &retval_ptr, &retval_len)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = std::string(retval_ptr, retval_len);
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___std__string___gt__(PyObject *arg, std::vector< std::string > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___std__string___gt___Type)) {
        *container = *((Pystd__vector__lt___std__string___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            std::string item;
            if (!_wrap_convert_py2c__std__string(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___std__string___gt__ instance, or a list of std::string");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___std__string___gt____tp_init(Pystd__vector__lt___std__string___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< std::string >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___std__string___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___std__string___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Config.Std__vector__lt___std__string___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___std__string___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___std__string___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___std__string___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___std__string___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___std__string___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Config.Std__vector__lt___std__string___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___std__string___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___std__string___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___std__string___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___std__string___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___std__string___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___std__string___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef netanim_Config_moduledef = {
    PyModuleDef_HEAD_INIT,
    "netanim.Config",
    NULL,
    -1,
    netanim_Config_functions,
};
#endif

static PyObject *
initnetanim_Config(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&netanim_Config_moduledef);
    #else
    m = Py_InitModule3((char *) "netanim.Config", netanim_Config_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    /* Import the 'ns3::Config::MatchContainer' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3ConfigMatchContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MatchContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ConfigMatchContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ConfigMatchContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ConfigMatchContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Register the 'std::vector< ns3::Ptr< ns3::Object > >' class */
    if (PyType_Ready(&Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt___Type)) {
        return NULL;
    }
    if (PyType_Ready(&Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter_Type)) {
        return NULL;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__", (PyObject *) &Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter", (PyObject *) &Pystd__vector__lt___ns3__Ptr__lt___ns3__Object___gt_____gt__Iter_Type);
    /* Register the 'std::vector< std::string >' class */
    if (PyType_Ready(&Pystd__vector__lt___std__string___gt___Type)) {
        return NULL;
    }
    if (PyType_Ready(&Pystd__vector__lt___std__string___gt__Iter_Type)) {
        return NULL;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___std__string___gt__", (PyObject *) &Pystd__vector__lt___std__string___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___std__string___gt__Iter", (PyObject *) &Pystd__vector__lt___std__string___gt__Iter_Type);
    return m;
}
static PyMethodDef netanim_FatalImpl_functions[] = {
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef netanim_FatalImpl_moduledef = {
    PyModuleDef_HEAD_INIT,
    "netanim.FatalImpl",
    NULL,
    -1,
    netanim_FatalImpl_functions,
};
#endif

static PyObject *
initnetanim_FatalImpl(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&netanim_FatalImpl_moduledef);
    #else
    m = Py_InitModule3((char *) "netanim.FatalImpl", netanim_FatalImpl_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    return m;
}
static PyMethodDef netanim_Hash_Function_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3HashFunctionFnv1a_Type;


PyTypeObject *_PyNs3HashFunctionHash32_Type;


PyTypeObject *_PyNs3HashFunctionHash64_Type;


PyTypeObject *_PyNs3HashFunctionMurmur3_Type;

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef netanim_Hash_Function_moduledef = {
    PyModuleDef_HEAD_INIT,
    "netanim.Hash.Function",
    NULL,
    -1,
    netanim_Hash_Function_functions,
};
#endif

static PyObject *
initnetanim_Hash_Function(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&netanim_Hash_Function_moduledef);
    #else
    m = Py_InitModule3((char *) "netanim.Hash.Function", netanim_Hash_Function_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    /* Import the 'ns3::Hash::Function::Fnv1a' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionFnv1a_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Fnv1a");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Hash32' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionHash32_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hash32");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Hash64' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionHash64_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hash64");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Murmur3' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionMurmur3_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Murmur3");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    return m;
}
static PyMethodDef netanim_Hash_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3HashImplementation_Type;

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef netanim_Hash_moduledef = {
    PyModuleDef_HEAD_INIT,
    "netanim.Hash",
    NULL,
    -1,
    netanim_Hash_functions,
};
#endif

static PyObject *
initnetanim_Hash(void)
{
    PyObject *m;
    PyObject *submodule;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&netanim_Hash_moduledef);
    #else
    m = Py_InitModule3((char *) "netanim.Hash", netanim_Hash_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    /* Import the 'ns3::Hash::Implementation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashImplementation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Implementation");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    submodule = initnetanim_Hash_Function();
    if (submodule == NULL) {
        return NULL;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "Function", submodule);
    return m;
}
static PyMethodDef netanim_internal_functions[] = {
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef netanim_internal_moduledef = {
    PyModuleDef_HEAD_INIT,
    "netanim.internal",
    NULL,
    -1,
    netanim_internal_functions,
};
#endif

static PyObject *
initnetanim_internal(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&netanim_internal_moduledef);
    #else
    m = Py_InitModule3((char *) "netanim.internal", netanim_internal_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    return m;
}
static PyMethodDef netanim_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3Address_Type;
std::map<void*, PyObject*> *_PyNs3Address_wrapper_registry;


PyTypeObject *_PyNs3AllocationRetentionPriority_Type;
std::map<void*, PyObject*> *_PyNs3AllocationRetentionPriority_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionList_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionList_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionListItem_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionListItem_wrapper_registry;


PyTypeObject *_PyNs3BandInfo_Type;
std::map<void*, PyObject*> *_PyNs3BandInfo_wrapper_registry;


PyTypeObject *_PyNs3Buffer_Type;
std::map<void*, PyObject*> *_PyNs3Buffer_wrapper_registry;


PyTypeObject *_PyNs3BufferIterator_Type;
std::map<void*, PyObject*> *_PyNs3BufferIterator_wrapper_registry;


PyTypeObject *_PyNs3BufferSizeLevelBsr_Type;
std::map<void*, PyObject*> *_PyNs3BufferSizeLevelBsr_wrapper_registry;


PyTypeObject *_PyNs3BuildBroadcastListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3BuildBroadcastListElement_s_wrapper_registry;


PyTypeObject *_PyNs3BuildDataListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3BuildDataListElement_s_wrapper_registry;


PyTypeObject *_PyNs3BuildRarListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3BuildRarListElement_s_wrapper_registry;


PyTypeObject *_PyNs3BwPart_s_Type;
std::map<void*, PyObject*> *_PyNs3BwPart_s_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3ByteTagList_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagList_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3CallbackBase_Type;
std::map<void*, PyObject*> *_PyNs3CallbackBase_wrapper_registry;


PyTypeObject *_PyNs3CqiConfig_s_Type;
std::map<void*, PyObject*> *_PyNs3CqiConfig_s_wrapper_registry;


PyTypeObject *_PyNs3CqiListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3CqiListElement_s_wrapper_registry;


PyTypeObject *_PyNs3DataRate_Type;
std::map<void*, PyObject*> *_PyNs3DataRate_wrapper_registry;


PyTypeObject *_PyNs3DlDciListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3DlDciListElement_s_wrapper_registry;


PyTypeObject *_PyNs3DlInfoListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3DlInfoListElement_s_wrapper_registry;


PyTypeObject *_PyNs3DrxConfig_s_Type;
std::map<void*, PyObject*> *_PyNs3DrxConfig_s_wrapper_registry;


PyTypeObject *_PyNs3EpsBearer_Type;
std::map<void*, PyObject*> *_PyNs3EpsBearer_wrapper_registry;


PyTypeObject *_PyNs3EutranMeasurementMapping_Type;
std::map<void*, PyObject*> *_PyNs3EutranMeasurementMapping_wrapper_registry;


PyTypeObject *_PyNs3EventId_Type;
std::map<void*, PyObject*> *_PyNs3EventId_wrapper_registry;


PyTypeObject *_PyNs3GbrQosInformation_Type;
std::map<void*, PyObject*> *_PyNs3GbrQosInformation_wrapper_registry;


PyTypeObject *_PyNs3HarqProcessInfoElement_t_Type;
std::map<void*, PyObject*> *_PyNs3HarqProcessInfoElement_t_wrapper_registry;


PyTypeObject *_PyNs3Hasher_Type;
std::map<void*, PyObject*> *_PyNs3Hasher_wrapper_registry;


PyTypeObject *_PyNs3HigherLayerSelected_s_Type;
std::map<void*, PyObject*> *_PyNs3HigherLayerSelected_s_wrapper_registry;


PyTypeObject *_PyNs3ImsiLcidPair_t_Type;
std::map<void*, PyObject*> *_PyNs3ImsiLcidPair_t_wrapper_registry;


PyTypeObject *_PyNs3Inet6SocketAddress_Type;
std::map<void*, PyObject*> *_PyNs3Inet6SocketAddress_wrapper_registry;


PyTypeObject *_PyNs3InetSocketAddress_Type;
std::map<void*, PyObject*> *_PyNs3InetSocketAddress_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv4InterfaceAddress_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4InterfaceAddress_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Mask_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Mask_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Prefix_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Prefix_wrapper_registry;


PyTypeObject *_PyNs3LogComponent_Type;
std::map<void*, PyObject*> *_PyNs3LogComponent_wrapper_registry;


PyTypeObject *_PyNs3LogicalChannelConfigListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3LogicalChannelConfigListElement_s_wrapper_registry;


PyTypeObject *_PyNs3LteFfConverter_Type;
std::map<void*, PyObject*> *_PyNs3LteFfConverter_wrapper_registry;


PyTypeObject *_PyNs3LteFlowId_t_Type;
std::map<void*, PyObject*> *_PyNs3LteFlowId_t_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSap_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSap_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapAntennaInfoDedicated_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapAntennaInfoDedicated_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapAsConfig_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapAsConfig_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapBlackCellsToAddMod_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapBlackCellsToAddMod_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapCarrierBandwidthEutra_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapCarrierBandwidthEutra_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapCarrierFreqEutra_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapCarrierFreqEutra_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapCellAccessRelatedInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapCellAccessRelatedInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapCellSelectionInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapCellSelectionInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapCellsToAddMod_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapCellsToAddMod_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapCgiInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapCgiInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapDrbToAddMod_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapDrbToAddMod_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapFreqInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapFreqInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapHandoverPreparationInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapHandoverPreparationInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapLogicalChannelConfig_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapLogicalChannelConfig_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMasterInformationBlock_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMasterInformationBlock_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasConfig_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasConfig_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasGapConfig_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasGapConfig_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasIdToAddMod_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasIdToAddMod_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasObjectEutra_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasObjectEutra_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasObjectToAddMod_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasObjectToAddMod_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasResultEutra_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasResultEutra_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasResults_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasResults_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMeasurementReport_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMeasurementReport_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMobilityControlInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMobilityControlInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapMobilityStateParameters_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapMobilityStateParameters_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapPdschConfigCommon_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapPdschConfigCommon_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapPdschConfigDedicated_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapPdschConfigDedicated_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapPhysCellIdRange_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapPhysCellIdRange_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapPhysicalConfigDedicated_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapPhysicalConfigDedicated_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapPlmnIdentityInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapPlmnIdentityInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapPreambleInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapPreambleInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapQuantityConfig_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapQuantityConfig_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRaSupervisionInfo_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRaSupervisionInfo_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRachConfigCommon_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRachConfigCommon_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRachConfigDedicated_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRachConfigDedicated_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRadioResourceConfigCommon_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRadioResourceConfigCommon_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRadioResourceConfigCommonSib_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRadioResourceConfigCommonSib_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRadioResourceConfigDedicated_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRadioResourceConfigDedicated_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapReestabUeIdentity_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapReestabUeIdentity_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapReportConfigEutra_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapReportConfigEutra_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapReportConfigToAddMod_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapReportConfigToAddMod_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRlcConfig_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRlcConfig_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionReconfiguration_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionReconfiguration_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionReconfigurationCompleted_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionReconfigurationCompleted_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionReestablishment_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionReestablishment_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionReestablishmentComplete_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionReestablishmentComplete_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionReestablishmentReject_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionReestablishmentReject_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionReestablishmentRequest_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionReestablishmentRequest_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionReject_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionReject_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionRelease_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionRelease_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionRequest_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionRequest_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionSetup_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionSetup_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapRrcConnectionSetupCompleted_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapRrcConnectionSetupCompleted_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSoundingRsUlConfigCommon_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSoundingRsUlConfigCommon_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSoundingRsUlConfigDedicated_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSoundingRsUlConfigDedicated_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSpeedStatePars_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSpeedStatePars_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSpeedStateScaleFactors_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSpeedStateScaleFactors_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSrbToAddMod_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSrbToAddMod_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSystemInformation_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSystemInformation_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSystemInformationBlockType1_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSystemInformationBlockType1_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapSystemInformationBlockType2_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapSystemInformationBlockType2_wrapper_registry;


PyTypeObject *_PyNs3LteRrcSapThresholdEutra_Type;
std::map<void*, PyObject*> *_PyNs3LteRrcSapThresholdEutra_wrapper_registry;


PyTypeObject *_PyNs3LteUeConfig_t_Type;
std::map<void*, PyObject*> *_PyNs3LteUeConfig_t_wrapper_registry;


PyTypeObject *_PyNs3LteUeRrcSapProvider_Type;


PyTypeObject *_PyNs3LteUeRrcSapProviderCompleteSetupParameters_Type;
std::map<void*, PyObject*> *_PyNs3LteUeRrcSapProviderCompleteSetupParameters_wrapper_registry;


PyTypeObject *_PyNs3LteUeRrcSapUser_Type;


PyTypeObject *_PyNs3LteUeRrcSapUserSetupParameters_Type;
std::map<void*, PyObject*> *_PyNs3LteUeRrcSapUserSetupParameters_wrapper_registry;


PyTypeObject *_PyNs3Mac48Address_Type;
std::map<void*, PyObject*> *_PyNs3Mac48Address_wrapper_registry;


PyTypeObject *_PyNs3MacCeListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3MacCeListElement_s_wrapper_registry;


PyTypeObject *_PyNs3MacCeValue_u_Type;
std::map<void*, PyObject*> *_PyNs3MacCeValue_u_wrapper_registry;


PyTypeObject *_PyNs3NodeContainer_Type;
std::map<void*, PyObject*> *_PyNs3NodeContainer_wrapper_registry;


PyTypeObject *_PyNs3NodeList_Type;
std::map<void*, PyObject*> *_PyNs3NodeList_wrapper_registry;


PyTypeObject *_PyNs3ObjectBase_Type;
std::map<void*, PyObject*> *_PyNs3ObjectBase_wrapper_registry;


PyTypeObject *_PyNs3ObjectDeleter_Type;
std::map<void*, PyObject*> *_PyNs3ObjectDeleter_wrapper_registry;


PyTypeObject *_PyNs3ObjectFactory_Type;
std::map<void*, PyObject*> *_PyNs3ObjectFactory_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadata_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadata_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItem_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItemIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItemIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3PacketTagList_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagList_wrapper_registry;


PyTypeObject *_PyNs3PacketTagListTagData_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagListTagData_wrapper_registry;


PyTypeObject *_PyNs3PagingInfoListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3PagingInfoListElement_s_wrapper_registry;


PyTypeObject *_PyNs3ParameterLogger_Type;
std::map<void*, PyObject*> *_PyNs3ParameterLogger_wrapper_registry;


PyTypeObject *_PyNs3PhichListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3PhichListElement_s_wrapper_registry;


PyTypeObject *_PyNs3PhyReceptionStatParameters_Type;
std::map<void*, PyObject*> *_PyNs3PhyReceptionStatParameters_wrapper_registry;


PyTypeObject *_PyNs3PhyTransmissionStatParameters_Type;
std::map<void*, PyObject*> *_PyNs3PhyTransmissionStatParameters_wrapper_registry;


PyTypeObject *_PyNs3RachListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3RachListElement_s_wrapper_registry;


PyTypeObject *_PyNs3Rectangle_Type;
std::map<void*, PyObject*> *_PyNs3Rectangle_wrapper_registry;


PyTypeObject *_PyNs3RlcPduListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3RlcPduListElement_s_wrapper_registry;


PyTypeObject *_PyNs3SbMeasResult_s_Type;
std::map<void*, PyObject*> *_PyNs3SbMeasResult_s_wrapper_registry;


PyTypeObject *_PyNs3SiConfiguration_s_Type;
std::map<void*, PyObject*> *_PyNs3SiConfiguration_s_wrapper_registry;


PyTypeObject *_PyNs3SiMessageListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3SiMessageListElement_s_wrapper_registry;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map;


PyTypeObject *_PyNs3Simulator_Type;
std::map<void*, PyObject*> *_PyNs3Simulator_wrapper_registry;


PyTypeObject *_PyNs3SpsConfig_s_Type;
std::map<void*, PyObject*> *_PyNs3SpsConfig_s_wrapper_registry;


PyTypeObject *_PyNs3SrConfig_s_Type;
std::map<void*, PyObject*> *_PyNs3SrConfig_s_wrapper_registry;


PyTypeObject *_PyNs3SrListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3SrListElement_s_wrapper_registry;


PyTypeObject *_PyNs3Tag_Type;


PyTypeObject *_PyNs3TagBuffer_Type;
std::map<void*, PyObject*> *_PyNs3TagBuffer_wrapper_registry;


PyTypeObject *_PyNs3Tap_Type;
std::map<void*, PyObject*> *_PyNs3Tap_wrapper_registry;


PyTypeObject *_PyNs3TbId_t_Type;
std::map<void*, PyObject*> *_PyNs3TbId_t_wrapper_registry;


PyTypeObject *_PyNs3TimeWithUnit_Type;
std::map<void*, PyObject*> *_PyNs3TimeWithUnit_wrapper_registry;


PyTypeObject *_PyNs3TransmissionModesLayers_Type;
std::map<void*, PyObject*> *_PyNs3TransmissionModesLayers_wrapper_registry;


PyTypeObject *_PyNs3TypeId_Type;
std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;


PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;


PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;


PyTypeObject *_PyNs3UanModesList_Type;
std::map<void*, PyObject*> *_PyNs3UanModesList_wrapper_registry;


PyTypeObject *_PyNs3UanPacketArrival_Type;
std::map<void*, PyObject*> *_PyNs3UanPacketArrival_wrapper_registry;


PyTypeObject *_PyNs3UanPdp_Type;
std::map<void*, PyObject*> *_PyNs3UanPdp_wrapper_registry;


PyTypeObject *_PyNs3UanPhyListener_Type;
std::map<void*, PyObject*> *_PyNs3UanPhyListener_wrapper_registry;


PyTypeObject *_PyNs3UanTxMode_Type;
std::map<void*, PyObject*> *_PyNs3UanTxMode_wrapper_registry;


PyTypeObject *_PyNs3UanTxModeFactory_Type;
std::map<void*, PyObject*> *_PyNs3UanTxModeFactory_wrapper_registry;


PyTypeObject *_PyNs3UeCapabilities_s_Type;
std::map<void*, PyObject*> *_PyNs3UeCapabilities_s_wrapper_registry;


PyTypeObject *_PyNs3UeSelected_s_Type;
std::map<void*, PyObject*> *_PyNs3UeSelected_s_wrapper_registry;


PyTypeObject *_PyNs3UlCqi_s_Type;
std::map<void*, PyObject*> *_PyNs3UlCqi_s_wrapper_registry;


PyTypeObject *_PyNs3UlDciListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3UlDciListElement_s_wrapper_registry;


PyTypeObject *_PyNs3UlGrant_s_Type;
std::map<void*, PyObject*> *_PyNs3UlGrant_s_wrapper_registry;


PyTypeObject *_PyNs3UlInfoListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3UlInfoListElement_s_wrapper_registry;


PyTypeObject *_PyNs3Vector2D_Type;
std::map<void*, PyObject*> *_PyNs3Vector2D_wrapper_registry;


PyTypeObject *_PyNs3Vector3D_Type;
std::map<void*, PyObject*> *_PyNs3Vector3D_wrapper_registry;


PyTypeObject *_PyNs3VendorSpecificListElement_s_Type;
std::map<void*, PyObject*> *_PyNs3VendorSpecificListElement_s_wrapper_registry;


PyTypeObject *_PyNs3Empty_Type;
std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;


PyTypeObject *_PyNs3Int64x64_t_Type;
std::map<void*, PyObject*> *_PyNs3Int64x64_t_wrapper_registry;


PyTypeObject *_PyNs3TbInfo_t_Type;
std::map<void*, PyObject*> *_PyNs3TbInfo_t_wrapper_registry;


PyTypeObject *_PyNs3Chunk_Type;


PyTypeObject *_PyNs3Header_Type;


PyTypeObject *_PyNs3Ipv4Header_Type;


PyTypeObject *_PyNs3LteEnbRrcSapProvider_Type;


PyTypeObject *_PyNs3LteEnbRrcSapProviderCompleteSetupUeParameters_Type;
std::map<void*, PyObject*> *_PyNs3LteEnbRrcSapProviderCompleteSetupUeParameters_wrapper_registry;


PyTypeObject *_PyNs3LteEnbRrcSapUser_Type;


PyTypeObject *_PyNs3LteEnbRrcSapUserSetupUeParameters_Type;
std::map<void*, PyObject*> *_PyNs3LteEnbRrcSapUserSetupUeParameters_wrapper_registry;


PyTypeObject *_PyNs3Object_Type;


PyTypeObject *_PyNs3ObjectAggregateIterator_Type;
std::map<void*, PyObject*> *_PyNs3ObjectAggregateIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketBurst_Type;


PyTypeObject *_PyNs3RandomVariableStream_Type;


PyTypeObject *_PyNs3SequentialRandomVariable_Type;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3LteHarqPhy_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteHarqPhy__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3LteHarqPhy_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteHarqPhy__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3SpectrumSignalParameters_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumSignalParameters__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3SpectrumSignalParameters_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumSignalParameters__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3VendorSpecificValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3VendorSpecificValue__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3VendorSpecificValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3VendorSpecificValue__gt____typeid_map;


PyTypeObject *_PyNs3Socket_Type;


PyTypeObject *_PyNs3SocketAddressTag_Type;


PyTypeObject *_PyNs3SocketIpTosTag_Type;


PyTypeObject *_PyNs3SocketIpTtlTag_Type;


PyTypeObject *_PyNs3SocketIpv6HopLimitTag_Type;


PyTypeObject *_PyNs3SocketIpv6TclassTag_Type;


PyTypeObject *_PyNs3SocketSetDontFragmentTag_Type;


PyTypeObject *_PyNs3SpectrumInterference_Type;


PyTypeObject *_PyNs3SpectrumModel_Type;


PyTypeObject *_PyNs3SpectrumPhy_Type;


PyTypeObject *_PyNs3SpectrumSignalParameters_Type;


PyTypeObject *_PyNs3SpectrumValue_Type;


PyTypeObject *_PyNs3Time_Type;
std::map<void*, PyObject*> *_PyNs3Time_wrapper_registry;


PyTypeObject *_PyNs3TraceSourceAccessor_Type;


PyTypeObject *_PyNs3Trailer_Type;


PyTypeObject *_PyNs3TriangularRandomVariable_Type;


PyTypeObject *_PyNs3UanMac_Type;


PyTypeObject *_PyNs3UanPhy_Type;


PyTypeObject *_PyNs3UanPhyCalcSinr_Type;


PyTypeObject *_PyNs3UanPhyCalcSinrDefault_Type;


PyTypeObject *_PyNs3UanPhyCalcSinrFhFsk_Type;


PyTypeObject *_PyNs3UanPhyGen_Type;


PyTypeObject *_PyNs3UanPhyPer_Type;


PyTypeObject *_PyNs3UanPhyPerGenDefault_Type;


PyTypeObject *_PyNs3UanPhyPerUmodem_Type;


PyTypeObject *_PyNs3UanPropModel_Type;


PyTypeObject *_PyNs3UanTransducer_Type;


PyTypeObject *_PyNs3UniformRandomVariable_Type;


PyTypeObject *_PyNs3VendorSpecificValue_Type;


PyTypeObject *_PyNs3WeibullRandomVariable_Type;


PyTypeObject *_PyNs3ZetaRandomVariable_Type;


PyTypeObject *_PyNs3ZipfRandomVariable_Type;


PyTypeObject *_PyNs3AttributeAccessor_Type;


PyTypeObject *_PyNs3AttributeChecker_Type;


PyTypeObject *_PyNs3AttributeValue_Type;


PyTypeObject *_PyNs3CallbackChecker_Type;


PyTypeObject *_PyNs3CallbackImplBase_Type;


PyTypeObject *_PyNs3CallbackValue_Type;


PyTypeObject *_PyNs3Channel_Type;


PyTypeObject *_PyNs3ConstantRandomVariable_Type;


PyTypeObject *_PyNs3DataRateChecker_Type;


PyTypeObject *_PyNs3DataRateValue_Type;


PyTypeObject *_PyNs3DeterministicRandomVariable_Type;


PyTypeObject *_PyNs3DeviceEnergyModel_Type;


PyTypeObject *_PyNs3EmpiricalRandomVariable_Type;


PyTypeObject *_PyNs3EmptyAttributeValue_Type;


PyTypeObject *_PyNs3ErlangRandomVariable_Type;


PyTypeObject *_PyNs3EventImpl_Type;


PyTypeObject *_PyNs3ExponentialRandomVariable_Type;


PyTypeObject *_PyNs3GammaRandomVariable_Type;


PyTypeObject *_PyNs3Ipv4_Type;


PyTypeObject *_PyNs3Ipv4AddressChecker_Type;


PyTypeObject *_PyNs3Ipv4AddressValue_Type;


PyTypeObject *_PyNs3Ipv4L3Protocol_Type;


PyTypeObject *_PyNs3Ipv4MaskChecker_Type;


PyTypeObject *_PyNs3Ipv4MaskValue_Type;


PyTypeObject *_PyNs3Ipv4MulticastRoute_Type;


PyTypeObject *_PyNs3Ipv4Route_Type;


PyTypeObject *_PyNs3Ipv4RoutingProtocol_Type;


PyTypeObject *_PyNs3Ipv6AddressChecker_Type;


PyTypeObject *_PyNs3Ipv6AddressValue_Type;


PyTypeObject *_PyNs3Ipv6PrefixChecker_Type;


PyTypeObject *_PyNs3Ipv6PrefixValue_Type;


PyTypeObject *_PyNs3LogNormalRandomVariable_Type;


PyTypeObject *_PyNs3LteControlMessage_Type;


PyTypeObject *_PyNs3LteHarqPhy_Type;


PyTypeObject *_PyNs3LteInterference_Type;


PyTypeObject *_PyNs3LtePhy_Type;


PyTypeObject *_PyNs3LteSpectrumPhy_Type;


PyTypeObject *_PyNs3Mac48AddressChecker_Type;


PyTypeObject *_PyNs3Mac48AddressValue_Type;


PyTypeObject *_PyNs3MibLteControlMessage_Type;


PyTypeObject *_PyNs3MobilityModel_Type;


PyTypeObject *_PyNs3NetDevice_Type;


PyTypeObject *_PyNs3NixVector_Type;


PyTypeObject *_PyNs3Node_Type;


PyTypeObject *_PyNs3NormalRandomVariable_Type;


PyTypeObject *_PyNs3ObjectFactoryChecker_Type;


PyTypeObject *_PyNs3ObjectFactoryValue_Type;


PyTypeObject *_PyNs3OutputStreamWrapper_Type;


PyTypeObject *_PyNs3Packet_Type;


PyTypeObject *_PyNs3ParetoRandomVariable_Type;


PyTypeObject *_PyNs3RachPreambleLteControlMessage_Type;


PyTypeObject *_PyNs3RarLteControlMessage_Type;


PyTypeObject *_PyNs3RarLteControlMessageRar_Type;
std::map<void*, PyObject*> *_PyNs3RarLteControlMessageRar_wrapper_registry;


PyTypeObject *_PyNs3RectangleChecker_Type;


PyTypeObject *_PyNs3RectangleValue_Type;


PyTypeObject *_PyNs3Sib1LteControlMessage_Type;


PyTypeObject *_PyNs3SpectrumChannel_Type;


PyTypeObject *_PyNs3TimeValue_Type;


PyTypeObject *_PyNs3TypeIdChecker_Type;


PyTypeObject *_PyNs3TypeIdValue_Type;


PyTypeObject *_PyNs3UanModesListChecker_Type;


PyTypeObject *_PyNs3UanModesListValue_Type;


PyTypeObject *_PyNs3UintegerValue_Type;


PyTypeObject *_PyNs3UlDciLteControlMessage_Type;


PyTypeObject *_PyNs3Vector2DChecker_Type;


PyTypeObject *_PyNs3Vector2DValue_Type;


PyTypeObject *_PyNs3Vector3DChecker_Type;


PyTypeObject *_PyNs3Vector3DValue_Type;


PyTypeObject *_PyNs3AddressChecker_Type;


PyTypeObject *_PyNs3AddressValue_Type;


PyTypeObject *_PyNs3BsrLteControlMessage_Type;


PyTypeObject *_PyNs3DlCqiLteControlMessage_Type;


PyTypeObject *_PyNs3DlDciLteControlMessage_Type;


PyTypeObject *_PyNs3DlHarqFeedbackLteControlMessage_Type;


PyTypeObject *_PyNs3LteNetDevice_Type;


PyTypeObject *_PyNs3LteUeNetDevice_Type;


PyTypeObject *_PyNs3LteEnbNetDevice_Type;


std::map<void*, PyObject*> PyNs3AnimationInterface_wrapper_registry;


static int
_wrap_PyNs3AnimationInterface__tp_init__0(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3AnimationInterface *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3AnimationInterface_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::AnimationInterface(*((PyNs3AnimationInterface *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3AnimationInterface__tp_init__1(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *filename;
    Py_ssize_t filename_len;
    const char *keywords[] = {"filename", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &filename, &filename_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::AnimationInterface(std::string(filename, filename_len));
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3AnimationInterface__tp_init(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AnimationInterface__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AnimationInterface__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3AnimationInterface_ResetAnimWriteCallback(PyNs3AnimationInterface *self)
{
    PyObject *py_retval;
    
    self->obj->ResetAnimWriteCallback();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_SkipPacketTracing(PyNs3AnimationInterface *self)
{
    PyObject *py_retval;
    
    self->obj->SkipPacketTracing();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_UpdateNodeSize(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int nodeId;
    double width;
    double height;
    const char *keywords[] = {"nodeId", "width", "height", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Idd", (char **) keywords, &nodeId, &width, &height)) {
        return NULL;
    }
    self->obj->UpdateNodeSize(nodeId, width, height);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_AddResource(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    const char *resourcePath;
    Py_ssize_t resourcePath_len;
    const char *keywords[] = {"resourcePath", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &resourcePath, &resourcePath_len)) {
        return NULL;
    }
    retval = self->obj->AddResource(std::string(resourcePath, resourcePath_len));
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_UpdateNodeImage(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int nodeId;
    unsigned int resourceId;
    const char *keywords[] = {"nodeId", "resourceId", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "II", (char **) keywords, &nodeId, &resourceId)) {
        return NULL;
    }
    self->obj->UpdateNodeImage(nodeId, resourceId);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3AnimationInterface_UpdateLinkDescription__0(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    unsigned int fromNode;
    unsigned int toNode;
    const char *linkDescription;
    Py_ssize_t linkDescription_len;
    const char *keywords[] = {"fromNode", "toNode", "linkDescription", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IIs#", (char **) keywords, &fromNode, &toNode, &linkDescription, &linkDescription_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->UpdateLinkDescription(fromNode, toNode, std::string(linkDescription, linkDescription_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3AnimationInterface_UpdateLinkDescription__1(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Node *fromNode;
    ns3::Node *fromNode_ptr;
    PyNs3Node *toNode;
    ns3::Node *toNode_ptr;
    const char *linkDescription;
    Py_ssize_t linkDescription_len;
    const char *keywords[] = {"fromNode", "toNode", "linkDescription", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!s#", (char **) keywords, &PyNs3Node_Type, &fromNode, &PyNs3Node_Type, &toNode, &linkDescription, &linkDescription_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    fromNode_ptr = (fromNode ? fromNode->obj : NULL);
    toNode_ptr = (toNode ? toNode->obj : NULL);
    self->obj->UpdateLinkDescription(ns3::Ptr< ns3::Node  > (fromNode_ptr), ns3::Ptr< ns3::Node  > (toNode_ptr), std::string(linkDescription, linkDescription_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3AnimationInterface_UpdateLinkDescription(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AnimationInterface_UpdateLinkDescription__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AnimationInterface_UpdateLinkDescription__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3AnimationInterface_EnableQueueCounters(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3Time *stopTime;
    PyNs3Time *pollInterval = NULL;
    const char *keywords[] = {"startTime", "stopTime", "pollInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!|O!", (char **) keywords, &PyNs3Time_Type, &startTime, &PyNs3Time_Type, &stopTime, &PyNs3Time_Type, &pollInterval)) {
        return NULL;
    }
    self->obj->EnableQueueCounters(*((PyNs3Time *) startTime)->obj, *((PyNs3Time *) stopTime)->obj, (pollInterval ? (*((PyNs3Time *) pollInterval)->obj) : ns3::Seconds(0)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_SetBackgroundImage(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *fileName;
    Py_ssize_t fileName_len;
    double x;
    double y;
    double scaleX;
    double scaleY;
    double opacity;
    const char *keywords[] = {"fileName", "x", "y", "scaleX", "scaleY", "opacity", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#ddddd", (char **) keywords, &fileName, &fileName_len, &x, &y, &scaleX, &scaleY, &opacity)) {
        return NULL;
    }
    self->obj->SetBackgroundImage(std::string(fileName, fileName_len), x, y, scaleX, scaleY, opacity);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_UpdateNodeCounter(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int nodeCounterId;
    unsigned int nodeId;
    double counter;
    const char *keywords[] = {"nodeCounterId", "nodeId", "counter", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IId", (char **) keywords, &nodeCounterId, &nodeId, &counter)) {
        return NULL;
    }
    self->obj->UpdateNodeCounter(nodeCounterId, nodeId, counter);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_SetStopTime(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *t;
    const char *keywords[] = {"t", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &t)) {
        return NULL;
    }
    self->obj->SetStopTime(*((PyNs3Time *) t)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_EnableWifiMacCounters(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3Time *stopTime;
    PyNs3Time *pollInterval = NULL;
    const char *keywords[] = {"startTime", "stopTime", "pollInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!|O!", (char **) keywords, &PyNs3Time_Type, &startTime, &PyNs3Time_Type, &stopTime, &PyNs3Time_Type, &pollInterval)) {
        return NULL;
    }
    self->obj->EnableWifiMacCounters(*((PyNs3Time *) startTime)->obj, *((PyNs3Time *) stopTime)->obj, (pollInterval ? (*((PyNs3Time *) pollInterval)->obj) : ns3::Seconds(0)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_SetMaxPktsPerTraceFile(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t maxPktsPerFile;
    const char *keywords[] = {"maxPktsPerFile", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &maxPktsPerFile)) {
        return NULL;
    }
    self->obj->SetMaxPktsPerTraceFile(maxPktsPerFile);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_SetConstantPosition(PyNs3AnimationInterface *PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Node *n;
    ns3::Node *n_ptr;
    double x;
    double y;
    double z = 0;
    const char *keywords[] = {"n", "x", "y", "z", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!dd|d", (char **) keywords, &PyNs3Node_Type, &n, &x, &y, &z)) {
        return NULL;
    }
    n_ptr = (n ? n->obj : NULL);
    ns3::AnimationInterface::SetConstantPosition(ns3::Ptr< ns3::Node  > (n_ptr), x, y, z);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_EnableIpv4L3ProtocolCounters(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3Time *stopTime;
    PyNs3Time *pollInterval = NULL;
    const char *keywords[] = {"startTime", "stopTime", "pollInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!|O!", (char **) keywords, &PyNs3Time_Type, &startTime, &PyNs3Time_Type, &stopTime, &PyNs3Time_Type, &pollInterval)) {
        return NULL;
    }
    self->obj->EnableIpv4L3ProtocolCounters(*((PyNs3Time *) startTime)->obj, *((PyNs3Time *) stopTime)->obj, (pollInterval ? (*((PyNs3Time *) pollInterval)->obj) : ns3::Seconds(0)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}



PyObject *
_wrap_PyNs3AnimationInterface_EnableIpv4RouteTracking__0(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *fileName;
    Py_ssize_t fileName_len;
    PyNs3Time *startTime;
    PyNs3Time *stopTime;
    PyNs3Time *pollInterval = NULL;
    const char *keywords[] = {"fileName", "startTime", "stopTime", "pollInterval", NULL};
    PyNs3AnimationInterface *py_AnimationInterface;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!O!|O!", (char **) keywords, &fileName, &fileName_len, &PyNs3Time_Type, &startTime, &PyNs3Time_Type, &stopTime, &PyNs3Time_Type, &pollInterval)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::AnimationInterface & retval = self->obj->EnableIpv4RouteTracking(std::string(fileName, fileName_len), *((PyNs3Time *) startTime)->obj, *((PyNs3Time *) stopTime)->obj, (pollInterval ? (*((PyNs3Time *) pollInterval)->obj) : ns3::Seconds(0)));
    py_AnimationInterface = PyObject_New(PyNs3AnimationInterface, &PyNs3AnimationInterface_Type);
    py_AnimationInterface->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_AnimationInterface->obj = new ns3::AnimationInterface(retval);
    PyNs3AnimationInterface_wrapper_registry[(void *) py_AnimationInterface->obj] = (PyObject *) py_AnimationInterface;
    py_retval = Py_BuildValue((char *) "N", py_AnimationInterface);
    return py_retval;
}

PyObject *
_wrap_PyNs3AnimationInterface_EnableIpv4RouteTracking__1(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *fileName;
    Py_ssize_t fileName_len;
    PyNs3Time *startTime;
    PyNs3Time *stopTime;
    PyNs3NodeContainer *nc;
    PyNs3Time *pollInterval = NULL;
    const char *keywords[] = {"fileName", "startTime", "stopTime", "nc", "pollInterval", NULL};
    PyNs3AnimationInterface *py_AnimationInterface;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!O!O!|O!", (char **) keywords, &fileName, &fileName_len, &PyNs3Time_Type, &startTime, &PyNs3Time_Type, &stopTime, &PyNs3NodeContainer_Type, &nc, &PyNs3Time_Type, &pollInterval)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::AnimationInterface & retval = self->obj->EnableIpv4RouteTracking(std::string(fileName, fileName_len), *((PyNs3Time *) startTime)->obj, *((PyNs3Time *) stopTime)->obj, *((PyNs3NodeContainer *) nc)->obj, (pollInterval ? (*((PyNs3Time *) pollInterval)->obj) : ns3::Seconds(0)));
    py_AnimationInterface = PyObject_New(PyNs3AnimationInterface, &PyNs3AnimationInterface_Type);
    py_AnimationInterface->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_AnimationInterface->obj = new ns3::AnimationInterface(retval);
    PyNs3AnimationInterface_wrapper_registry[(void *) py_AnimationInterface->obj] = (PyObject *) py_AnimationInterface;
    py_retval = Py_BuildValue((char *) "N", py_AnimationInterface);
    return py_retval;
}

PyObject * _wrap_PyNs3AnimationInterface_EnableIpv4RouteTracking(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AnimationInterface_EnableIpv4RouteTracking__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AnimationInterface_EnableIpv4RouteTracking__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}



PyObject *
_wrap_PyNs3AnimationInterface_UpdateNodeColor__0(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Node *n;
    ns3::Node *n_ptr;
    int r;
    int g;
    int b;
    const char *keywords[] = {"n", "r", "g", "b", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!iii", (char **) keywords, &PyNs3Node_Type, &n, &r, &g, &b)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    n_ptr = (n ? n->obj : NULL);
    if (r > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (g > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (b > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->UpdateNodeColor(ns3::Ptr< ns3::Node  > (n_ptr), r, g, b);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3AnimationInterface_UpdateNodeColor__1(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    unsigned int nodeId;
    int r;
    int g;
    int b;
    const char *keywords[] = {"nodeId", "r", "g", "b", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Iiii", (char **) keywords, &nodeId, &r, &g, &b)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (r > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (g > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    if (b > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->UpdateNodeColor(nodeId, r, g, b);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3AnimationInterface_UpdateNodeColor(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AnimationInterface_UpdateNodeColor__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AnimationInterface_UpdateNodeColor__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3AnimationInterface_IsStarted(PyNs3AnimationInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsStarted();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_SetStartTime(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *t;
    const char *keywords[] = {"t", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &t)) {
        return NULL;
    }
    self->obj->SetStartTime(*((PyNs3Time *) t)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_SetMobilityPollInterval(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *t;
    const char *keywords[] = {"t", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &t)) {
        return NULL;
    }
    self->obj->SetMobilityPollInterval(*((PyNs3Time *) t)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_GetTracePktCount(PyNs3AnimationInterface *self)
{
    PyObject *py_retval;
    uint64_t retval;
    
    retval = self->obj->GetTracePktCount();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_GetNodeEnergyFraction(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    double retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    const char *keywords[] = {"node", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    retval = self->obj->GetNodeEnergyFraction(ns3::Ptr< ns3::Node  > (node_ptr));
    py_retval = Py_BuildValue((char *) "d", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_AddNodeCounter(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    const char *counterName;
    Py_ssize_t counterName_len;
    ns3::AnimationInterface::CounterType counterType;
    const char *keywords[] = {"counterName", "counterType", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#i", (char **) keywords, &counterName, &counterName_len, &counterType)) {
        return NULL;
    }
    retval = self->obj->AddNodeCounter(std::string(counterName, counterName_len), counterType);
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}



PyObject *
_wrap_PyNs3AnimationInterface_UpdateNodeDescription__0(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Node *n;
    ns3::Node *n_ptr;
    const char *descr;
    Py_ssize_t descr_len;
    const char *keywords[] = {"n", "descr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!s#", (char **) keywords, &PyNs3Node_Type, &n, &descr, &descr_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    n_ptr = (n ? n->obj : NULL);
    self->obj->UpdateNodeDescription(ns3::Ptr< ns3::Node  > (n_ptr), std::string(descr, descr_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
_wrap_PyNs3AnimationInterface_UpdateNodeDescription__1(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    unsigned int nodeId;
    const char *descr;
    Py_ssize_t descr_len;
    const char *keywords[] = {"nodeId", "descr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Is#", (char **) keywords, &nodeId, &descr, &descr_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    self->obj->UpdateNodeDescription(nodeId, std::string(descr, descr_len));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject * _wrap_PyNs3AnimationInterface_UpdateNodeDescription(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AnimationInterface_UpdateNodeDescription__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AnimationInterface_UpdateNodeDescription__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3AnimationInterface_EnableWifiPhyCounters(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *startTime;
    PyNs3Time *stopTime;
    PyNs3Time *pollInterval = NULL;
    const char *keywords[] = {"startTime", "stopTime", "pollInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!|O!", (char **) keywords, &PyNs3Time_Type, &startTime, &PyNs3Time_Type, &stopTime, &PyNs3Time_Type, &pollInterval)) {
        return NULL;
    }
    self->obj->EnableWifiPhyCounters(*((PyNs3Time *) startTime)->obj, *((PyNs3Time *) stopTime)->obj, (pollInterval ? (*((PyNs3Time *) pollInterval)->obj) : ns3::Seconds(0)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_EnablePacketMetadata(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool enable;
    PyObject *py_enable = NULL;
    const char *keywords[] = {"enable", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &py_enable)) {
        return NULL;
    }
    enable = py_enable? (bool) PyObject_IsTrue(py_enable) : true;
    self->obj->EnablePacketMetadata(enable);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_IsInitialized(void)
{
    PyObject *py_retval;
    bool retval;
    
    retval = ns3::AnimationInterface::IsInitialized();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimationInterface_AddSourceDestination(PyNs3AnimationInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int fromNodeId;
    const char *destinationIpv4Address;
    Py_ssize_t destinationIpv4Address_len;
    const char *keywords[] = {"fromNodeId", "destinationIpv4Address", NULL};
    PyNs3AnimationInterface *py_AnimationInterface;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "Is#", (char **) keywords, &fromNodeId, &destinationIpv4Address, &destinationIpv4Address_len)) {
        return NULL;
    }
    ns3::AnimationInterface & retval = self->obj->AddSourceDestination(fromNodeId, std::string(destinationIpv4Address, destinationIpv4Address_len));
    py_AnimationInterface = PyObject_New(PyNs3AnimationInterface, &PyNs3AnimationInterface_Type);
    py_AnimationInterface->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_AnimationInterface->obj = new ns3::AnimationInterface(retval);
    PyNs3AnimationInterface_wrapper_registry[(void *) py_AnimationInterface->obj] = (PyObject *) py_AnimationInterface;
    py_retval = Py_BuildValue((char *) "N", py_AnimationInterface);
    return py_retval;
}


static PyObject*
_wrap_PyNs3AnimationInterface__copy__(PyNs3AnimationInterface *self)
{

    PyNs3AnimationInterface *py_copy;
    py_copy = PyObject_New(PyNs3AnimationInterface, &PyNs3AnimationInterface_Type);
    py_copy->obj = new ns3::AnimationInterface(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3AnimationInterface_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3AnimationInterface_methods[] = {
    {(char *) "ResetAnimWriteCallback", (PyCFunction) _wrap_PyNs3AnimationInterface_ResetAnimWriteCallback, METH_NOARGS, NULL },
    {(char *) "SkipPacketTracing", (PyCFunction) _wrap_PyNs3AnimationInterface_SkipPacketTracing, METH_NOARGS, NULL },
    {(char *) "UpdateNodeSize", (PyCFunction) _wrap_PyNs3AnimationInterface_UpdateNodeSize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddResource", (PyCFunction) _wrap_PyNs3AnimationInterface_AddResource, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "UpdateNodeImage", (PyCFunction) _wrap_PyNs3AnimationInterface_UpdateNodeImage, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "UpdateLinkDescription", (PyCFunction) _wrap_PyNs3AnimationInterface_UpdateLinkDescription, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnableQueueCounters", (PyCFunction) _wrap_PyNs3AnimationInterface_EnableQueueCounters, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetBackgroundImage", (PyCFunction) _wrap_PyNs3AnimationInterface_SetBackgroundImage, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "UpdateNodeCounter", (PyCFunction) _wrap_PyNs3AnimationInterface_UpdateNodeCounter, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetStopTime", (PyCFunction) _wrap_PyNs3AnimationInterface_SetStopTime, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnableWifiMacCounters", (PyCFunction) _wrap_PyNs3AnimationInterface_EnableWifiMacCounters, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMaxPktsPerTraceFile", (PyCFunction) _wrap_PyNs3AnimationInterface_SetMaxPktsPerTraceFile, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetConstantPosition", (PyCFunction) _wrap_PyNs3AnimationInterface_SetConstantPosition, METH_KEYWORDS|METH_VARARGS|METH_STATIC, NULL },
    {(char *) "EnableIpv4L3ProtocolCounters", (PyCFunction) _wrap_PyNs3AnimationInterface_EnableIpv4L3ProtocolCounters, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnableIpv4RouteTracking", (PyCFunction) _wrap_PyNs3AnimationInterface_EnableIpv4RouteTracking, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "UpdateNodeColor", (PyCFunction) _wrap_PyNs3AnimationInterface_UpdateNodeColor, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsStarted", (PyCFunction) _wrap_PyNs3AnimationInterface_IsStarted, METH_NOARGS, NULL },
    {(char *) "SetStartTime", (PyCFunction) _wrap_PyNs3AnimationInterface_SetStartTime, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetMobilityPollInterval", (PyCFunction) _wrap_PyNs3AnimationInterface_SetMobilityPollInterval, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTracePktCount", (PyCFunction) _wrap_PyNs3AnimationInterface_GetTracePktCount, METH_NOARGS, NULL },
    {(char *) "GetNodeEnergyFraction", (PyCFunction) _wrap_PyNs3AnimationInterface_GetNodeEnergyFraction, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "AddNodeCounter", (PyCFunction) _wrap_PyNs3AnimationInterface_AddNodeCounter, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "UpdateNodeDescription", (PyCFunction) _wrap_PyNs3AnimationInterface_UpdateNodeDescription, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnableWifiPhyCounters", (PyCFunction) _wrap_PyNs3AnimationInterface_EnableWifiPhyCounters, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "EnablePacketMetadata", (PyCFunction) _wrap_PyNs3AnimationInterface_EnablePacketMetadata, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsInitialized", (PyCFunction) _wrap_PyNs3AnimationInterface_IsInitialized, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "AddSourceDestination", (PyCFunction) _wrap_PyNs3AnimationInterface_AddSourceDestination, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3AnimationInterface__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3AnimationInterface__tp_dealloc(PyNs3AnimationInterface *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3AnimationInterface_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3AnimationInterface_wrapper_registry.end()) {
        PyNs3AnimationInterface_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::AnimationInterface *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3AnimationInterface__tp_richcompare (PyNs3AnimationInterface *PYBINDGEN_UNUSED(self), PyNs3AnimationInterface *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3AnimationInterface_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3AnimationInterface_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.AnimationInterface",            /* tp_name */
    sizeof(PyNs3AnimationInterface),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3AnimationInterface__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3AnimationInterface__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3AnimationInterface_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3AnimationInterface__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3AnimByteTag__tp_init__0(PyNs3AnimByteTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::AnimByteTag();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3AnimByteTag__tp_init__1(PyNs3AnimByteTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3AnimByteTag *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3AnimByteTag_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::AnimByteTag(*((PyNs3AnimByteTag *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3AnimByteTag__tp_init(PyNs3AnimByteTag *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3AnimByteTag__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3AnimByteTag__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3AnimByteTag_Set(PyNs3AnimByteTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint64_t AnimUid;
    const char *keywords[] = {"AnimUid", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "K", (char **) keywords, &AnimUid)) {
        return NULL;
    }
    self->obj->Set(AnimUid);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimByteTag_Deserialize(PyNs3AnimByteTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &i)) {
        return NULL;
    }
    self->obj->Deserialize(*((PyNs3TagBuffer *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimByteTag_Get(PyNs3AnimByteTag *self)
{
    PyObject *py_retval;
    uint64_t retval;
    
    retval = self->obj->Get();
    py_retval = Py_BuildValue((char *) "K", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimByteTag_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::AnimByteTag::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimByteTag_Serialize(PyNs3AnimByteTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &i)) {
        return NULL;
    }
    self->obj->Serialize(*((PyNs3TagBuffer *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimByteTag_GetInstanceTypeId(PyNs3AnimByteTag *self)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = self->obj->GetInstanceTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3AnimByteTag_GetSerializedSize(PyNs3AnimByteTag *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSerializedSize();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3AnimByteTag__copy__(PyNs3AnimByteTag *self)
{

    PyNs3AnimByteTag *py_copy;
    py_copy = PyObject_GC_New(PyNs3AnimByteTag, &PyNs3AnimByteTag_Type);
    py_copy->inst_dict = NULL;
    py_copy->obj = new ns3::AnimByteTag(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3AnimByteTag_methods[] = {
    {(char *) "Set", (PyCFunction) _wrap_PyNs3AnimByteTag_Set, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3AnimByteTag_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Get", (PyCFunction) _wrap_PyNs3AnimByteTag_Get, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3AnimByteTag_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3AnimByteTag_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3AnimByteTag_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3AnimByteTag_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3AnimByteTag__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3AnimByteTag__tp_clear(PyNs3AnimByteTag *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::AnimByteTag *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3AnimByteTag__tp_traverse(PyNs3AnimByteTag *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3AnimByteTag__tp_dealloc(PyNs3AnimByteTag *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3AnimByteTag__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3AnimByteTag__tp_richcompare (PyNs3AnimByteTag *PYBINDGEN_UNUSED(self), PyNs3AnimByteTag *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3AnimByteTag_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3AnimByteTag_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.AnimByteTag",            /* tp_name */
    sizeof(PyNs3AnimByteTag),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3AnimByteTag__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3AnimByteTag__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3AnimByteTag__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3AnimByteTag__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3AnimByteTag_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3AnimByteTag, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3AnimByteTag__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- containers --- */



static void
Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_clear(Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_traverse(Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt____tp_dealloc(Pystd__vector__lt___ns3__CeBitmap_e___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_dealloc(Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt____tp_iter(Pystd__vector__lt___ns3__CeBitmap_e___gt__ *self)
{
    Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter, &Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< ns3::CeBitmap_e >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_iter(Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_iternext(Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< ns3::CeBitmap_e >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "i", (*iter));
    return py_retval;
}

int _wrap_convert_py2c__ns3__CeBitmap_e(PyObject *value, ns3::CeBitmap_e *address)
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &*address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___ns3__CeBitmap_e___gt__(PyObject *arg, std::vector< ns3::CeBitmap_e > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___ns3__CeBitmap_e___gt___Type)) {
        *container = *((Pystd__vector__lt___ns3__CeBitmap_e___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::CeBitmap_e item;
            if (!_wrap_convert_py2c__ns3__CeBitmap_e(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___ns3__CeBitmap_e___gt__ instance, or a list of ns3::CeBitmap_e");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt____tp_init(Pystd__vector__lt___ns3__CeBitmap_e___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< ns3::CeBitmap_e >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___ns3__CeBitmap_e___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___ns3__CeBitmap_e___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__CeBitmap_e___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__CeBitmap_e___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__CeBitmap_e___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___unsigned_char___gt__Iter__tp_clear(Pystd__vector__lt___unsigned_char___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___unsigned_char___gt__Iter__tp_traverse(Pystd__vector__lt___unsigned_char___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___unsigned_char___gt____tp_dealloc(Pystd__vector__lt___unsigned_char___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___unsigned_char___gt__Iter__tp_dealloc(Pystd__vector__lt___unsigned_char___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___unsigned_char___gt____tp_iter(Pystd__vector__lt___unsigned_char___gt__ *self)
{
    Pystd__vector__lt___unsigned_char___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___unsigned_char___gt__Iter, &Pystd__vector__lt___unsigned_char___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< unsigned char >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___unsigned_char___gt__Iter__tp_iter(Pystd__vector__lt___unsigned_char___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___unsigned_char___gt__Iter__tp_iternext(Pystd__vector__lt___unsigned_char___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< unsigned char >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "i", (int)(*iter));
    return py_retval;
}

int _wrap_convert_py2c__unsigned_char(PyObject *value, unsigned char *address)
{
    PyObject *py_retval;
    int tmp;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &tmp)) {
        Py_DECREF(py_retval);
        return 0;
    }
    if (tmp > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        Py_DECREF(py_retval);
        return 0;
    }
    *address = tmp;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___unsigned_char___gt__(PyObject *arg, std::vector< unsigned char > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___unsigned_char___gt___Type)) {
        *container = *((Pystd__vector__lt___unsigned_char___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            unsigned char item;
            if (!_wrap_convert_py2c__unsigned_char(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___unsigned_char___gt__ instance, or a list of unsigned char");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___unsigned_char___gt____tp_init(Pystd__vector__lt___unsigned_char___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< unsigned char >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___unsigned_char___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___unsigned_char___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___unsigned_char___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___unsigned_char___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___unsigned_char___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___unsigned_char___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___unsigned_char___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___unsigned_char___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___unsigned_char___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___unsigned_char___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___unsigned_char___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___unsigned_char___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___unsigned_char___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___unsigned_char___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___unsigned_char___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___unsigned_short___gt__Iter__tp_clear(Pystd__vector__lt___unsigned_short___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___unsigned_short___gt__Iter__tp_traverse(Pystd__vector__lt___unsigned_short___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___unsigned_short___gt____tp_dealloc(Pystd__vector__lt___unsigned_short___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___unsigned_short___gt__Iter__tp_dealloc(Pystd__vector__lt___unsigned_short___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___unsigned_short___gt____tp_iter(Pystd__vector__lt___unsigned_short___gt__ *self)
{
    Pystd__vector__lt___unsigned_short___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___unsigned_short___gt__Iter, &Pystd__vector__lt___unsigned_short___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< unsigned short >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___unsigned_short___gt__Iter__tp_iter(Pystd__vector__lt___unsigned_short___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___unsigned_short___gt__Iter__tp_iternext(Pystd__vector__lt___unsigned_short___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< unsigned short >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "i", (*iter));
    return py_retval;
}

int _wrap_convert_py2c__short_unsigned_int(PyObject *value, short unsigned int *address)
{
    PyObject *py_retval;
    int tmp;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &tmp)) {
        Py_DECREF(py_retval);
        return 0;
    }
    if (tmp > 0xffff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        Py_DECREF(py_retval);
        return 0;
    }
    *address = tmp;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___unsigned_short___gt__(PyObject *arg, std::vector< unsigned short > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___unsigned_short___gt___Type)) {
        *container = *((Pystd__vector__lt___unsigned_short___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            short unsigned int item;
            if (!_wrap_convert_py2c__short_unsigned_int(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___unsigned_short___gt__ instance, or a list of short unsigned int");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___unsigned_short___gt____tp_init(Pystd__vector__lt___unsigned_short___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< unsigned short >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___unsigned_short___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___unsigned_short___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___unsigned_short___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___unsigned_short___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___unsigned_short___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___unsigned_short___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___unsigned_short___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___unsigned_short___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___unsigned_short___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___unsigned_short___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___unsigned_short___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___unsigned_short___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___unsigned_short___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___unsigned_short___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___unsigned_short___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_clear(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_traverse(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt____tp_dealloc(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_dealloc(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt____tp_iter(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__ *self)
{
    Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter, &Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< ns3::DlInfoListElement_s::HarqStatus_e >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_iter(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_iternext(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< ns3::DlInfoListElement_s::HarqStatus_e >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "i", (*iter));
    return py_retval;
}

int _wrap_convert_py2c__ns3__DlInfoListElement_s__HarqStatus_e(PyObject *value, ns3::DlInfoListElement_s::HarqStatus_e *address)
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &*address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__(PyObject *arg, std::vector< ns3::DlInfoListElement_s::HarqStatus_e > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt___Type)) {
        *container = *((Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::DlInfoListElement_s::HarqStatus_e item;
            if (!_wrap_convert_py2c__ns3__DlInfoListElement_s__HarqStatus_e(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__ instance, or a list of ns3::DlInfoListElement_s::HarqStatus_e");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt____tp_init(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< ns3::DlInfoListElement_s::HarqStatus_e >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::SrbToAddMod >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::SrbToAddMod >::iterator iter;
    PyNs3LteRrcSapSrbToAddMod *py_SrbToAddMod;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_SrbToAddMod = PyObject_New(PyNs3LteRrcSapSrbToAddMod, &PyNs3LteRrcSapSrbToAddMod_Type);
    py_SrbToAddMod->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SrbToAddMod->obj = new ns3::LteRrcSap::SrbToAddMod((*iter));
    PyNs3LteRrcSapSrbToAddMod_wrapper_registry[(void *) py_SrbToAddMod->obj] = (PyObject *) py_SrbToAddMod;
    py_retval = Py_BuildValue((char *) "N", py_SrbToAddMod);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__SrbToAddMod(PyObject *value, ns3::LteRrcSap::SrbToAddMod *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapSrbToAddMod *tmp_SrbToAddMod;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapSrbToAddMod_Type, &tmp_SrbToAddMod)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_SrbToAddMod->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__(PyObject *arg, std::list< ns3::LteRrcSap::SrbToAddMod > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::SrbToAddMod item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__SrbToAddMod(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__ instance, or a list of ns3::LteRrcSap::SrbToAddMod");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::SrbToAddMod >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::DrbToAddMod >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::DrbToAddMod >::iterator iter;
    PyNs3LteRrcSapDrbToAddMod *py_DrbToAddMod;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_DrbToAddMod = PyObject_New(PyNs3LteRrcSapDrbToAddMod, &PyNs3LteRrcSapDrbToAddMod_Type);
    py_DrbToAddMod->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_DrbToAddMod->obj = new ns3::LteRrcSap::DrbToAddMod((*iter));
    PyNs3LteRrcSapDrbToAddMod_wrapper_registry[(void *) py_DrbToAddMod->obj] = (PyObject *) py_DrbToAddMod;
    py_retval = Py_BuildValue((char *) "N", py_DrbToAddMod);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__DrbToAddMod(PyObject *value, ns3::LteRrcSap::DrbToAddMod *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapDrbToAddMod *tmp_DrbToAddMod;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapDrbToAddMod_Type, &tmp_DrbToAddMod)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_DrbToAddMod->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__(PyObject *arg, std::list< ns3::LteRrcSap::DrbToAddMod > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::DrbToAddMod item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__DrbToAddMod(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__ instance, or a list of ns3::LteRrcSap::DrbToAddMod");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::DrbToAddMod >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___unsigned_char___gt__Iter__tp_clear(Pystd__list__lt___unsigned_char___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___unsigned_char___gt__Iter__tp_traverse(Pystd__list__lt___unsigned_char___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___unsigned_char___gt____tp_dealloc(Pystd__list__lt___unsigned_char___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___unsigned_char___gt__Iter__tp_dealloc(Pystd__list__lt___unsigned_char___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___unsigned_char___gt____tp_iter(Pystd__list__lt___unsigned_char___gt__ *self)
{
    Pystd__list__lt___unsigned_char___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___unsigned_char___gt__Iter, &Pystd__list__lt___unsigned_char___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< unsigned char >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___unsigned_char___gt__Iter__tp_iter(Pystd__list__lt___unsigned_char___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___unsigned_char___gt__Iter__tp_iternext(Pystd__list__lt___unsigned_char___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< unsigned char >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "i", (int)(*iter));
    return py_retval;
}

int _wrap_convert_py2c__std__list__lt___unsigned_char___gt__(PyObject *arg, std::list< unsigned char > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___unsigned_char___gt___Type)) {
        *container = *((Pystd__list__lt___unsigned_char___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            unsigned char item;
            if (!_wrap_convert_py2c__unsigned_char(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___unsigned_char___gt__ instance, or a list of unsigned char");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___unsigned_char___gt____tp_init(Pystd__list__lt___unsigned_char___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< unsigned char >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___unsigned_char___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___unsigned_char___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___unsigned_char___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___unsigned_char___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___unsigned_char___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___unsigned_char___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___unsigned_char___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___unsigned_char___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___unsigned_char___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___unsigned_char___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___unsigned_char___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___unsigned_char___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___unsigned_char___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___unsigned_char___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___unsigned_char___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::CellsToAddMod >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::CellsToAddMod >::iterator iter;
    PyNs3LteRrcSapCellsToAddMod *py_CellsToAddMod;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_CellsToAddMod = PyObject_New(PyNs3LteRrcSapCellsToAddMod, &PyNs3LteRrcSapCellsToAddMod_Type);
    py_CellsToAddMod->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_CellsToAddMod->obj = new ns3::LteRrcSap::CellsToAddMod((*iter));
    PyNs3LteRrcSapCellsToAddMod_wrapper_registry[(void *) py_CellsToAddMod->obj] = (PyObject *) py_CellsToAddMod;
    py_retval = Py_BuildValue((char *) "N", py_CellsToAddMod);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__CellsToAddMod(PyObject *value, ns3::LteRrcSap::CellsToAddMod *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapCellsToAddMod *tmp_CellsToAddMod;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapCellsToAddMod_Type, &tmp_CellsToAddMod)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_CellsToAddMod->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__(PyObject *arg, std::list< ns3::LteRrcSap::CellsToAddMod > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::CellsToAddMod item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__CellsToAddMod(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__ instance, or a list of ns3::LteRrcSap::CellsToAddMod");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::CellsToAddMod >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::BlackCellsToAddMod >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::BlackCellsToAddMod >::iterator iter;
    PyNs3LteRrcSapBlackCellsToAddMod *py_BlackCellsToAddMod;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_BlackCellsToAddMod = PyObject_New(PyNs3LteRrcSapBlackCellsToAddMod, &PyNs3LteRrcSapBlackCellsToAddMod_Type);
    py_BlackCellsToAddMod->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_BlackCellsToAddMod->obj = new ns3::LteRrcSap::BlackCellsToAddMod((*iter));
    PyNs3LteRrcSapBlackCellsToAddMod_wrapper_registry[(void *) py_BlackCellsToAddMod->obj] = (PyObject *) py_BlackCellsToAddMod;
    py_retval = Py_BuildValue((char *) "N", py_BlackCellsToAddMod);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__BlackCellsToAddMod(PyObject *value, ns3::LteRrcSap::BlackCellsToAddMod *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapBlackCellsToAddMod *tmp_BlackCellsToAddMod;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapBlackCellsToAddMod_Type, &tmp_BlackCellsToAddMod)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_BlackCellsToAddMod->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__(PyObject *arg, std::list< ns3::LteRrcSap::BlackCellsToAddMod > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::BlackCellsToAddMod item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__BlackCellsToAddMod(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__ instance, or a list of ns3::LteRrcSap::BlackCellsToAddMod");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::BlackCellsToAddMod >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::MeasObjectToAddMod >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::MeasObjectToAddMod >::iterator iter;
    PyNs3LteRrcSapMeasObjectToAddMod *py_MeasObjectToAddMod;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_MeasObjectToAddMod = PyObject_New(PyNs3LteRrcSapMeasObjectToAddMod, &PyNs3LteRrcSapMeasObjectToAddMod_Type);
    py_MeasObjectToAddMod->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_MeasObjectToAddMod->obj = new ns3::LteRrcSap::MeasObjectToAddMod((*iter));
    PyNs3LteRrcSapMeasObjectToAddMod_wrapper_registry[(void *) py_MeasObjectToAddMod->obj] = (PyObject *) py_MeasObjectToAddMod;
    py_retval = Py_BuildValue((char *) "N", py_MeasObjectToAddMod);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__MeasObjectToAddMod(PyObject *value, ns3::LteRrcSap::MeasObjectToAddMod *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapMeasObjectToAddMod *tmp_MeasObjectToAddMod;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapMeasObjectToAddMod_Type, &tmp_MeasObjectToAddMod)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_MeasObjectToAddMod->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__(PyObject *arg, std::list< ns3::LteRrcSap::MeasObjectToAddMod > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::MeasObjectToAddMod item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__MeasObjectToAddMod(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__ instance, or a list of ns3::LteRrcSap::MeasObjectToAddMod");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::MeasObjectToAddMod >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::ReportConfigToAddMod >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::ReportConfigToAddMod >::iterator iter;
    PyNs3LteRrcSapReportConfigToAddMod *py_ReportConfigToAddMod;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_ReportConfigToAddMod = PyObject_New(PyNs3LteRrcSapReportConfigToAddMod, &PyNs3LteRrcSapReportConfigToAddMod_Type);
    py_ReportConfigToAddMod->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ReportConfigToAddMod->obj = new ns3::LteRrcSap::ReportConfigToAddMod((*iter));
    PyNs3LteRrcSapReportConfigToAddMod_wrapper_registry[(void *) py_ReportConfigToAddMod->obj] = (PyObject *) py_ReportConfigToAddMod;
    py_retval = Py_BuildValue((char *) "N", py_ReportConfigToAddMod);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__ReportConfigToAddMod(PyObject *value, ns3::LteRrcSap::ReportConfigToAddMod *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapReportConfigToAddMod *tmp_ReportConfigToAddMod;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapReportConfigToAddMod_Type, &tmp_ReportConfigToAddMod)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_ReportConfigToAddMod->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__(PyObject *arg, std::list< ns3::LteRrcSap::ReportConfigToAddMod > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::ReportConfigToAddMod item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__ReportConfigToAddMod(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__ instance, or a list of ns3::LteRrcSap::ReportConfigToAddMod");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::ReportConfigToAddMod >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::MeasIdToAddMod >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::MeasIdToAddMod >::iterator iter;
    PyNs3LteRrcSapMeasIdToAddMod *py_MeasIdToAddMod;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_MeasIdToAddMod = PyObject_New(PyNs3LteRrcSapMeasIdToAddMod, &PyNs3LteRrcSapMeasIdToAddMod_Type);
    py_MeasIdToAddMod->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_MeasIdToAddMod->obj = new ns3::LteRrcSap::MeasIdToAddMod((*iter));
    PyNs3LteRrcSapMeasIdToAddMod_wrapper_registry[(void *) py_MeasIdToAddMod->obj] = (PyObject *) py_MeasIdToAddMod;
    py_retval = Py_BuildValue((char *) "N", py_MeasIdToAddMod);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__MeasIdToAddMod(PyObject *value, ns3::LteRrcSap::MeasIdToAddMod *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapMeasIdToAddMod *tmp_MeasIdToAddMod;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapMeasIdToAddMod_Type, &tmp_MeasIdToAddMod)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_MeasIdToAddMod->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__(PyObject *arg, std::list< ns3::LteRrcSap::MeasIdToAddMod > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::MeasIdToAddMod item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__MeasIdToAddMod(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__ instance, or a list of ns3::LteRrcSap::MeasIdToAddMod");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::MeasIdToAddMod >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___unsigned_int___gt__Iter__tp_clear(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___unsigned_int___gt__Iter__tp_traverse(Pystd__list__lt___unsigned_int___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___unsigned_int___gt____tp_dealloc(Pystd__list__lt___unsigned_int___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_dealloc(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___unsigned_int___gt____tp_iter(Pystd__list__lt___unsigned_int___gt__ *self)
{
    Pystd__list__lt___unsigned_int___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___unsigned_int___gt__Iter, &Pystd__list__lt___unsigned_int___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< unsigned int >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iter(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iternext(Pystd__list__lt___unsigned_int___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< unsigned int >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong((*iter)));
    return py_retval;
}

int _wrap_convert_py2c__unsigned_int(PyObject *value, unsigned int *address)
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &*address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___unsigned_int___gt__(PyObject *arg, std::list< unsigned int > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___unsigned_int___gt___Type)) {
        *container = *((Pystd__list__lt___unsigned_int___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            unsigned int item;
            if (!_wrap_convert_py2c__unsigned_int(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___unsigned_int___gt__ instance, or a list of unsigned int");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___unsigned_int___gt____tp_init(Pystd__list__lt___unsigned_int___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< unsigned int >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___unsigned_int___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___unsigned_int___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___unsigned_int___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___unsigned_int___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___unsigned_int___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___unsigned_int___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___unsigned_int___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___unsigned_int___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___unsigned_int___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___unsigned_int___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___unsigned_int___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___unsigned_int___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___unsigned_int___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_clear(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_traverse(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt____tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt____tp_iter(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__ *self)
{
    Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter, &Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::LteRrcSap::MeasResultEutra >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_iter(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_iternext(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::LteRrcSap::MeasResultEutra >::iterator iter;
    PyNs3LteRrcSapMeasResultEutra *py_MeasResultEutra;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_MeasResultEutra = PyObject_New(PyNs3LteRrcSapMeasResultEutra, &PyNs3LteRrcSapMeasResultEutra_Type);
    py_MeasResultEutra->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_MeasResultEutra->obj = new ns3::LteRrcSap::MeasResultEutra((*iter));
    PyNs3LteRrcSapMeasResultEutra_wrapper_registry[(void *) py_MeasResultEutra->obj] = (PyObject *) py_MeasResultEutra;
    py_retval = Py_BuildValue((char *) "N", py_MeasResultEutra);
    return py_retval;
}

int _wrap_convert_py2c__ns3__LteRrcSap__MeasResultEutra(PyObject *value, ns3::LteRrcSap::MeasResultEutra *address)
{
    PyObject *py_retval;
    PyNs3LteRrcSapMeasResultEutra *tmp_MeasResultEutra;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteRrcSapMeasResultEutra_Type, &tmp_MeasResultEutra)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_MeasResultEutra->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__(PyObject *arg, std::list< ns3::LteRrcSap::MeasResultEutra > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::LteRrcSap::MeasResultEutra item;
            if (!_wrap_convert_py2c__ns3__LteRrcSap__MeasResultEutra(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__ instance, or a list of ns3::LteRrcSap::MeasResultEutra");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt____tp_init(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::LteRrcSap::MeasResultEutra >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_clear(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_traverse(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt____tp_dealloc(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_dealloc(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt____tp_iter(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__ *self)
{
    Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter, &Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< ns3::HigherLayerSelected_s >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_iter(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_iternext(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< ns3::HigherLayerSelected_s >::iterator iter;
    PyNs3HigherLayerSelected_s *py_HigherLayerSelected_s;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_HigherLayerSelected_s = PyObject_New(PyNs3HigherLayerSelected_s, &PyNs3HigherLayerSelected_s_Type);
    py_HigherLayerSelected_s->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HigherLayerSelected_s->obj = new ns3::HigherLayerSelected_s((*iter));
    PyNs3HigherLayerSelected_s_wrapper_registry[(void *) py_HigherLayerSelected_s->obj] = (PyObject *) py_HigherLayerSelected_s;
    py_retval = Py_BuildValue((char *) "N", py_HigherLayerSelected_s);
    return py_retval;
}

int _wrap_convert_py2c__ns3__HigherLayerSelected_s(PyObject *value, ns3::HigherLayerSelected_s *address)
{
    PyObject *py_retval;
    PyNs3HigherLayerSelected_s *tmp_HigherLayerSelected_s;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3HigherLayerSelected_s_Type, &tmp_HigherLayerSelected_s)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_HigherLayerSelected_s->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___ns3__HigherLayerSelected_s___gt__(PyObject *arg, std::vector< ns3::HigherLayerSelected_s > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___ns3__HigherLayerSelected_s___gt___Type)) {
        *container = *((Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::HigherLayerSelected_s item;
            if (!_wrap_convert_py2c__ns3__HigherLayerSelected_s(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___ns3__HigherLayerSelected_s___gt__ instance, or a list of ns3::HigherLayerSelected_s");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt____tp_init(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< ns3::HigherLayerSelected_s >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___ns3__HigherLayerSelected_s___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___ns3__HigherLayerSelected_s___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__HigherLayerSelected_s___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__HigherLayerSelected_s___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_clear(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_traverse(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt____tp_dealloc(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_dealloc(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt____tp_iter(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__ *self)
{
    Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter, &Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< ns3::SiMessageListElement_s >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_iter(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_iternext(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< ns3::SiMessageListElement_s >::iterator iter;
    PyNs3SiMessageListElement_s *py_SiMessageListElement_s;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_SiMessageListElement_s = PyObject_New(PyNs3SiMessageListElement_s, &PyNs3SiMessageListElement_s_Type);
    py_SiMessageListElement_s->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_SiMessageListElement_s->obj = new ns3::SiMessageListElement_s((*iter));
    PyNs3SiMessageListElement_s_wrapper_registry[(void *) py_SiMessageListElement_s->obj] = (PyObject *) py_SiMessageListElement_s;
    py_retval = Py_BuildValue((char *) "N", py_SiMessageListElement_s);
    return py_retval;
}

int _wrap_convert_py2c__ns3__SiMessageListElement_s(PyObject *value, ns3::SiMessageListElement_s *address)
{
    PyObject *py_retval;
    PyNs3SiMessageListElement_s *tmp_SiMessageListElement_s;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3SiMessageListElement_s_Type, &tmp_SiMessageListElement_s)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_SiMessageListElement_s->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___ns3__SiMessageListElement_s___gt__(PyObject *arg, std::vector< ns3::SiMessageListElement_s > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___ns3__SiMessageListElement_s___gt___Type)) {
        *container = *((Pystd__vector__lt___ns3__SiMessageListElement_s___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::SiMessageListElement_s item;
            if (!_wrap_convert_py2c__ns3__SiMessageListElement_s(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___ns3__SiMessageListElement_s___gt__ instance, or a list of ns3::SiMessageListElement_s");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt____tp_init(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< ns3::SiMessageListElement_s >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___ns3__SiMessageListElement_s___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___ns3__SiMessageListElement_s___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__SiMessageListElement_s___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__SiMessageListElement_s___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___ns3__Tap___gt__Iter__tp_clear(Pystd__vector__lt___ns3__Tap___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___ns3__Tap___gt__Iter__tp_traverse(Pystd__vector__lt___ns3__Tap___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___ns3__Tap___gt____tp_dealloc(Pystd__vector__lt___ns3__Tap___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___ns3__Tap___gt__Iter__tp_dealloc(Pystd__vector__lt___ns3__Tap___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__Tap___gt____tp_iter(Pystd__vector__lt___ns3__Tap___gt__ *self)
{
    Pystd__vector__lt___ns3__Tap___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___ns3__Tap___gt__Iter, &Pystd__vector__lt___ns3__Tap___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< ns3::Tap >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__Tap___gt__Iter__tp_iter(Pystd__vector__lt___ns3__Tap___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___ns3__Tap___gt__Iter__tp_iternext(Pystd__vector__lt___ns3__Tap___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< ns3::Tap >::iterator iter;
    PyNs3Tap *py_Tap;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_Tap = PyObject_New(PyNs3Tap, &PyNs3Tap_Type);
    py_Tap->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Tap->obj = new ns3::Tap((*iter));
    PyNs3Tap_wrapper_registry[(void *) py_Tap->obj] = (PyObject *) py_Tap;
    py_retval = Py_BuildValue((char *) "N", py_Tap);
    return py_retval;
}

int _wrap_convert_py2c__ns3__Tap(PyObject *value, ns3::Tap *address)
{
    PyObject *py_retval;
    PyNs3Tap *tmp_Tap;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Tap_Type, &tmp_Tap)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_Tap->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___ns3__Tap___gt__(PyObject *arg, std::vector< ns3::Tap > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___ns3__Tap___gt___Type)) {
        *container = *((Pystd__vector__lt___ns3__Tap___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Tap item;
            if (!_wrap_convert_py2c__ns3__Tap(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___ns3__Tap___gt__ instance, or a list of ns3::Tap");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___ns3__Tap___gt____tp_init(Pystd__vector__lt___ns3__Tap___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< ns3::Tap >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___ns3__Tap___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___ns3__Tap___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__Tap___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__Tap___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__Tap___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__Tap___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___ns3__Tap___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___ns3__Tap___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___ns3__Tap___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__Tap___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__Tap___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___ns3__Tap___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___ns3__Tap___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__Tap___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___ns3__Tap___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___double___gt__Iter__tp_clear(Pystd__vector__lt___double___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___double___gt__Iter__tp_traverse(Pystd__vector__lt___double___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___double___gt____tp_dealloc(Pystd__vector__lt___double___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___double___gt__Iter__tp_dealloc(Pystd__vector__lt___double___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___double___gt____tp_iter(Pystd__vector__lt___double___gt__ *self)
{
    Pystd__vector__lt___double___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___double___gt__Iter, &Pystd__vector__lt___double___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< double >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___double___gt__Iter__tp_iter(Pystd__vector__lt___double___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___double___gt__Iter__tp_iternext(Pystd__vector__lt___double___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< double >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "d", (*iter));
    return py_retval;
}

int _wrap_convert_py2c__double(PyObject *value, double *address)
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "d", &*address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___double___gt__(PyObject *arg, std::vector< double > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___double___gt___Type)) {
        *container = *((Pystd__vector__lt___double___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            double item;
            if (!_wrap_convert_py2c__double(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___double___gt__ instance, or a list of double");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___double___gt____tp_init(Pystd__vector__lt___double___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< double >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___double___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___double___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___double___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___double___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___double___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___double___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___double___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___double___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___double___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___double___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___double___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___double___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___double___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___double___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___double___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__vector__lt___int___gt__Iter__tp_clear(Pystd__vector__lt___int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___int___gt__Iter__tp_traverse(Pystd__vector__lt___int___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___int___gt____tp_dealloc(Pystd__vector__lt___int___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___int___gt__Iter__tp_dealloc(Pystd__vector__lt___int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___int___gt____tp_iter(Pystd__vector__lt___int___gt__ *self)
{
    Pystd__vector__lt___int___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___int___gt__Iter, &Pystd__vector__lt___int___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< int >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___int___gt__Iter__tp_iter(Pystd__vector__lt___int___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___int___gt__Iter__tp_iternext(Pystd__vector__lt___int___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< int >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "i", (*iter));
    return py_retval;
}

int _wrap_convert_py2c__int(PyObject *value, int *address)
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &*address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___int___gt__(PyObject *arg, std::vector< int > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___int___gt___Type)) {
        *container = *((Pystd__vector__lt___int___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            int item;
            if (!_wrap_convert_py2c__int(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___int___gt__ instance, or a list of int");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___int___gt____tp_init(Pystd__vector__lt___int___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< int >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___int___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___int___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___int___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___int___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___int___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___int___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___int___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___int___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__vector__lt___int___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___int___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___int___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___int___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___int___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___int___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___int___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_clear(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_traverse(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt____tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt____tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__ *self)
{
    Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter, &Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::Ptr< ns3::Packet > >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_iternext(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::Ptr< ns3::Packet > >::iterator iter;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    if (!(const_cast<ns3::Packet *> (ns3::PeekPointer ((*iter))))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer ((*iter))));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::Packet *> (ns3::PeekPointer ((*iter))))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
    
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer ((*iter)))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer ((*iter)));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_retval = Py_BuildValue((char *) "N", py_Packet);
    return py_retval;
}

int _wrap_convert_py2c__ns3__Ptr__lt___ns3__Packet___gt__(PyObject *value, ns3::Ptr< ns3::Packet > *address)
{
    PyObject *py_retval;
    PyNs3Packet *tmp_Packet;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Packet_Type, &tmp_Packet)) {
        Py_DECREF(py_retval);
        return 0;
    }
    // dangerous!
    *address = ns3::Ptr< ns3::Packet  > (tmp_Packet->obj);
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__(PyObject *arg, std::list< ns3::Ptr< ns3::Packet > > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt___Type)) {
        *container = *((Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Ptr< ns3::Packet > item;
            if (!_wrap_convert_py2c__ns3__Ptr__lt___ns3__Packet___gt__(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__ instance, or a list of ns3::Ptr< ns3::Packet >");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt____tp_init(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::Ptr< ns3::Packet > >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pyns3__BandsIter__tp_clear(Pyns3__BandsIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pyns3__BandsIter__tp_traverse(Pyns3__BandsIter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pyns3__Bands__tp_dealloc(Pyns3__Bands *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pyns3__BandsIter__tp_dealloc(Pyns3__BandsIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pyns3__Bands__tp_iter(Pyns3__Bands *self)
{
    Pyns3__BandsIter *iter = PyObject_GC_New(Pyns3__BandsIter, &Pyns3__BandsIter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new ns3::Bands::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pyns3__BandsIter__tp_iter(Pyns3__BandsIter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pyns3__BandsIter__tp_iternext(Pyns3__BandsIter *self)
{
    PyObject *py_retval;
    ns3::Bands::iterator iter;
    PyNs3BandInfo *py_BandInfo;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_BandInfo = PyObject_New(PyNs3BandInfo, &PyNs3BandInfo_Type);
    py_BandInfo->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_BandInfo->obj = new ns3::BandInfo((*iter));
    PyNs3BandInfo_wrapper_registry[(void *) py_BandInfo->obj] = (PyObject *) py_BandInfo;
    py_retval = Py_BuildValue((char *) "N", py_BandInfo);
    return py_retval;
}

int _wrap_convert_py2c__ns3__BandInfo(PyObject *value, ns3::BandInfo *address)
{
    PyObject *py_retval;
    PyNs3BandInfo *tmp_BandInfo;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3BandInfo_Type, &tmp_BandInfo)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_BandInfo->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__ns3__Bands(PyObject *arg, ns3::Bands *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pyns3__Bands_Type)) {
        *container = *((Pyns3__Bands*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::BandInfo item;
            if (!_wrap_convert_py2c__ns3__BandInfo(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Ns3__Bands instance, or a list of ns3::BandInfo");
        return 0;
    }
    return 1;
}


static int
_wrap_Pyns3__Bands__tp_init(Pyns3__Bands *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new ns3::Bands;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__ns3__Bands(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pyns3__Bands_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Ns3__Bands",            /* tp_name */
    sizeof(Pyns3__Bands),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__Bands__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__Bands__tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pyns3__Bands__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pyns3__BandsIter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Ns3__BandsIter",            /* tp_name */
    sizeof(Pyns3__BandsIter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__BandsIter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pyns3__BandsIter__tp_traverse,     /* tp_traverse */
    (inquiry)Pyns3__BandsIter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__BandsIter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pyns3__BandsIter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_clear(Pystd__list__lt___ns3__UanPacketArrival___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_traverse(Pystd__list__lt___ns3__UanPacketArrival___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt____tp_dealloc(Pystd__list__lt___ns3__UanPacketArrival___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_dealloc(Pystd__list__lt___ns3__UanPacketArrival___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt____tp_iter(Pystd__list__lt___ns3__UanPacketArrival___gt__ *self)
{
    Pystd__list__lt___ns3__UanPacketArrival___gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__UanPacketArrival___gt__Iter, &Pystd__list__lt___ns3__UanPacketArrival___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::UanPacketArrival >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_iter(Pystd__list__lt___ns3__UanPacketArrival___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_iternext(Pystd__list__lt___ns3__UanPacketArrival___gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::UanPacketArrival >::iterator iter;
    PyNs3UanPacketArrival *py_UanPacketArrival;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_UanPacketArrival = PyObject_New(PyNs3UanPacketArrival, &PyNs3UanPacketArrival_Type);
    py_UanPacketArrival->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_UanPacketArrival->obj = new ns3::UanPacketArrival((*iter));
    PyNs3UanPacketArrival_wrapper_registry[(void *) py_UanPacketArrival->obj] = (PyObject *) py_UanPacketArrival;
    py_retval = Py_BuildValue((char *) "N", py_UanPacketArrival);
    return py_retval;
}

int _wrap_convert_py2c__ns3__UanPacketArrival(PyObject *value, ns3::UanPacketArrival *address)
{
    PyObject *py_retval;
    PyNs3UanPacketArrival *tmp_UanPacketArrival;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3UanPacketArrival_Type, &tmp_UanPacketArrival)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_UanPacketArrival->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__UanPacketArrival___gt__(PyObject *arg, std::list< ns3::UanPacketArrival > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__UanPacketArrival___gt___Type)) {
        *container = *((Pystd__list__lt___ns3__UanPacketArrival___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::UanPacketArrival item;
            if (!_wrap_convert_py2c__ns3__UanPacketArrival(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__UanPacketArrival___gt__ instance, or a list of ns3::UanPacketArrival");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt____tp_init(Pystd__list__lt___ns3__UanPacketArrival___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::UanPacketArrival >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__UanPacketArrival___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__UanPacketArrival___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__UanPacketArrival___gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__UanPacketArrival___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__UanPacketArrival___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__UanPacketArrival___gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__UanPacketArrival___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__UanPacketArrival___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_clear(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_traverse(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt____tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt____tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__ *self)
{
    Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter, &Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::Ptr< ns3::UanPhy > >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_iternext(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::Ptr< ns3::UanPhy > >::iterator iter;
    PyNs3UanPhy *py_UanPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    if (!(const_cast<ns3::UanPhy *> (ns3::PeekPointer ((*iter))))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::UanPhy *> (ns3::PeekPointer ((*iter))));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_UanPhy = NULL;
    } else {
        py_UanPhy = (PyNs3UanPhy *) wrapper_lookup_iter->second;
        Py_INCREF(py_UanPhy);
    }
    
    if (py_UanPhy == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::UanPhy *> (ns3::PeekPointer ((*iter))))), &PyNs3UanPhy_Type);
        py_UanPhy = PyObject_GC_New(PyNs3UanPhy, wrapper_type);
        py_UanPhy->inst_dict = NULL;
    
        py_UanPhy->inst_dict = NULL;
        py_UanPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::UanPhy *> (ns3::PeekPointer ((*iter)))->Ref();
        py_UanPhy->obj = const_cast<ns3::UanPhy *> (ns3::PeekPointer ((*iter)));
        PyNs3ObjectBase_wrapper_registry[(void *) py_UanPhy->obj] = (PyObject *) py_UanPhy;
    }
    py_retval = Py_BuildValue((char *) "N", py_UanPhy);
    return py_retval;
}

int _wrap_convert_py2c__ns3__Ptr__lt___ns3__UanPhy___gt__(PyObject *value, ns3::Ptr< ns3::UanPhy > *address)
{
    PyObject *py_retval;
    PyNs3UanPhy *tmp_UanPhy;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3UanPhy_Type, &tmp_UanPhy)) {
        Py_DECREF(py_retval);
        return 0;
    }
    // dangerous!
    *address = ns3::Ptr< ns3::UanPhy  > (tmp_UanPhy->obj);
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__(PyObject *arg, std::list< ns3::Ptr< ns3::UanPhy > > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt___Type)) {
        *container = *((Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Ptr< ns3::UanPhy > item;
            if (!_wrap_convert_py2c__ns3__Ptr__lt___ns3__UanPhy___gt__(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__ instance, or a list of ns3::Ptr< ns3::UanPhy >");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt____tp_init(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::Ptr< ns3::UanPhy > >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_clear(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_traverse(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_dealloc(Pystd__map__lt___unsigned_int__unsigned_int___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_dealloc(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_iter(Pystd__map__lt___unsigned_int__unsigned_int___gt__ *self)
{
    Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *iter = PyObject_GC_New(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter, &Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::map< unsigned int, unsigned int >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iter(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iternext(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    PyObject *py_retval;
    std::map< unsigned int, unsigned int >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "NN", PyLong_FromUnsignedLong(iter->first), PyLong_FromUnsignedLong(iter->second));
    return py_retval;
}

int _wrap_convert_py2c__std__map__lt___unsigned_int__unsigned_int___gt__(PyObject *arg, std::map< unsigned int, unsigned int > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__map__lt___unsigned_int__unsigned_int___gt___Type)) {
        *container = *((Pystd__map__lt___unsigned_int__unsigned_int___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            PyObject *tup = PyList_GET_ITEM(arg, i);
            if (!PyTuple_Check(tup) || PyTuple_Size(tup) != 2) {
                PyErr_SetString(PyExc_TypeError, "items must be tuples with two elements");
                return 0;
            }
            std::pair< unsigned int, unsigned int > item;
            if (!_wrap_convert_py2c__unsigned_int(PyTuple_GET_ITEM(tup, 0), &item.first)) {
                return 0;
            }
            if (!_wrap_convert_py2c__unsigned_int(PyTuple_GET_ITEM(tup, 1), &item.second)) {
                return 0;
            }
            container->insert(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__map__lt___unsigned_int__unsigned_int___gt__ instance, or a list of unsigned int");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_init(Pystd__map__lt___unsigned_int__unsigned_int___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::map< unsigned int, unsigned int >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__map__lt___unsigned_int__unsigned_int___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__map__lt___unsigned_int__unsigned_int___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__map__lt___unsigned_int__unsigned_int___gt__",            /* tp_name */
    sizeof(Pystd__map__lt___unsigned_int__unsigned_int___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__map__lt___unsigned_int__unsigned_int___gt__Iter",            /* tp_name */
    sizeof(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pyns3__HarqProcessInfoList_tIter__tp_clear(Pyns3__HarqProcessInfoList_tIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pyns3__HarqProcessInfoList_tIter__tp_traverse(Pyns3__HarqProcessInfoList_tIter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pyns3__HarqProcessInfoList_t__tp_dealloc(Pyns3__HarqProcessInfoList_t *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pyns3__HarqProcessInfoList_tIter__tp_dealloc(Pyns3__HarqProcessInfoList_tIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pyns3__HarqProcessInfoList_t__tp_iter(Pyns3__HarqProcessInfoList_t *self)
{
    Pyns3__HarqProcessInfoList_tIter *iter = PyObject_GC_New(Pyns3__HarqProcessInfoList_tIter, &Pyns3__HarqProcessInfoList_tIter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new ns3::HarqProcessInfoList_t::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pyns3__HarqProcessInfoList_tIter__tp_iter(Pyns3__HarqProcessInfoList_tIter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pyns3__HarqProcessInfoList_tIter__tp_iternext(Pyns3__HarqProcessInfoList_tIter *self)
{
    PyObject *py_retval;
    ns3::HarqProcessInfoList_t::iterator iter;
    PyNs3HarqProcessInfoElement_t *py_HarqProcessInfoElement_t;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_HarqProcessInfoElement_t = PyObject_New(PyNs3HarqProcessInfoElement_t, &PyNs3HarqProcessInfoElement_t_Type);
    py_HarqProcessInfoElement_t->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_HarqProcessInfoElement_t->obj = new ns3::HarqProcessInfoElement_t((*iter));
    PyNs3HarqProcessInfoElement_t_wrapper_registry[(void *) py_HarqProcessInfoElement_t->obj] = (PyObject *) py_HarqProcessInfoElement_t;
    py_retval = Py_BuildValue((char *) "N", py_HarqProcessInfoElement_t);
    return py_retval;
}

int _wrap_convert_py2c__ns3__HarqProcessInfoElement_t(PyObject *value, ns3::HarqProcessInfoElement_t *address)
{
    PyObject *py_retval;
    PyNs3HarqProcessInfoElement_t *tmp_HarqProcessInfoElement_t;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3HarqProcessInfoElement_t_Type, &tmp_HarqProcessInfoElement_t)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_HarqProcessInfoElement_t->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__ns3__HarqProcessInfoList_t(PyObject *arg, ns3::HarqProcessInfoList_t *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pyns3__HarqProcessInfoList_t_Type)) {
        *container = *((Pyns3__HarqProcessInfoList_t*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::HarqProcessInfoElement_t item;
            if (!_wrap_convert_py2c__ns3__HarqProcessInfoElement_t(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Ns3__HarqProcessInfoList_t instance, or a list of ns3::HarqProcessInfoElement_t");
        return 0;
    }
    return 1;
}


static int
_wrap_Pyns3__HarqProcessInfoList_t__tp_init(Pyns3__HarqProcessInfoList_t *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new ns3::HarqProcessInfoList_t;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__ns3__HarqProcessInfoList_t(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pyns3__HarqProcessInfoList_t_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Ns3__HarqProcessInfoList_t",            /* tp_name */
    sizeof(Pyns3__HarqProcessInfoList_t),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__HarqProcessInfoList_t__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__HarqProcessInfoList_t__tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pyns3__HarqProcessInfoList_t__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pyns3__HarqProcessInfoList_tIter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Ns3__HarqProcessInfoList_tIter",            /* tp_name */
    sizeof(Pyns3__HarqProcessInfoList_tIter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__HarqProcessInfoList_tIter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pyns3__HarqProcessInfoList_tIter__tp_traverse,     /* tp_traverse */
    (inquiry)Pyns3__HarqProcessInfoList_tIter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__HarqProcessInfoList_tIter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pyns3__HarqProcessInfoList_tIter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_clear(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_traverse(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt____tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt____tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__ *self)
{
    Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter, &Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::Ptr< ns3::LteControlMessage > >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_iternext(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::Ptr< ns3::LteControlMessage > >::iterator iter;
    PyNs3LteControlMessage *py_LteControlMessage;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    if (!(const_cast<ns3::LteControlMessage *> (ns3::PeekPointer ((*iter))))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::LteControlMessage *> (ns3::PeekPointer ((*iter))));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_LteControlMessage = NULL;
    } else {
        py_LteControlMessage = (PyNs3LteControlMessage *) wrapper_lookup_iter->second;
        Py_INCREF(py_LteControlMessage);
    }
    
    if (py_LteControlMessage == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::LteControlMessage *> (ns3::PeekPointer ((*iter))))), &PyNs3LteControlMessage_Type);
        py_LteControlMessage = PyObject_New(PyNs3LteControlMessage, wrapper_type);
    
        py_LteControlMessage->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::LteControlMessage *> (ns3::PeekPointer ((*iter)))->Ref();
        py_LteControlMessage->obj = const_cast<ns3::LteControlMessage *> (ns3::PeekPointer ((*iter)));
        PyNs3Empty_wrapper_registry[(void *) py_LteControlMessage->obj] = (PyObject *) py_LteControlMessage;
    }
    py_retval = Py_BuildValue((char *) "N", py_LteControlMessage);
    return py_retval;
}

int _wrap_convert_py2c__ns3__Ptr__lt___ns3__LteControlMessage___gt__(PyObject *value, ns3::Ptr< ns3::LteControlMessage > *address)
{
    PyObject *py_retval;
    PyNs3LteControlMessage *tmp_LteControlMessage;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3LteControlMessage_Type, &tmp_LteControlMessage)) {
        Py_DECREF(py_retval);
        return 0;
    }
    // dangerous!
    *address = ns3::Ptr< ns3::LteControlMessage  > (tmp_LteControlMessage->obj);
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__(PyObject *arg, std::list< ns3::Ptr< ns3::LteControlMessage > > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt___Type)) {
        *container = *((Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Ptr< ns3::LteControlMessage > item;
            if (!_wrap_convert_py2c__ns3__Ptr__lt___ns3__LteControlMessage___gt__(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__ instance, or a list of ns3::Ptr< ns3::LteControlMessage >");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt____tp_init(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::Ptr< ns3::LteControlMessage > >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "netanim.Std__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- enumerations --- */











































































































#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef netanim_moduledef = {
    PyModuleDef_HEAD_INIT,
    "netanim",
    NULL,
    -1,
    netanim_functions,
};
#endif


#if PY_VERSION_HEX >= 0x03000000
    #define MOD_ERROR NULL
    #define MOD_INIT(name) PyObject* PyInit_##name(void)
    #define MOD_RETURN(val) val
#else
    #define MOD_ERROR
    #define MOD_INIT(name) void init##name(void)
    #define MOD_RETURN(val)
#endif
#if defined(__cplusplus)
extern "C"
#endif
#if defined(__GNUC__) && __GNUC__ >= 4
__attribute__ ((visibility("default")))
#endif


MOD_INIT(netanim)
{
    PyObject *m;
    PyObject *submodule;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&netanim_moduledef);
    #else
    m = Py_InitModule3((char *) "netanim", netanim_functions, NULL);
    #endif
    if (m == NULL) {
        return MOD_ERROR;
    }
    PyModule_AddIntConstant(m, (char *) "STD_IOS_IN", std::ios::in);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_OUT", std::ios::out);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_ATE", std::ios::ate);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_APP", std::ios::app);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_TRUNC", std::ios::trunc);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_BINARY", std::ios::binary);
    /* Import the 'ns3::Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AllocationRetentionPriority' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AllocationRetentionPriority_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AllocationRetentionPriority");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AllocationRetentionPriority_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AllocationRetentionPriority_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AllocationRetentionPriority_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeConstructionList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeConstructionList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AttributeConstructionList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList::Item' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeConstructionListItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AttributeConstructionListItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionListItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionListItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BandInfo' class from module 'ns.spectrum' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.spectrum");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BandInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BandInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BandInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BandInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BandInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Buffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Buffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Buffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Buffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Buffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BufferIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BufferIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BufferIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BufferIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BufferSizeLevelBsr' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BufferSizeLevelBsr_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BufferSizeLevelBsr");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BufferSizeLevelBsr_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BufferSizeLevelBsr_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BufferSizeLevelBsr_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BuildBroadcastListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BuildBroadcastListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BuildBroadcastListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BuildBroadcastListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BuildBroadcastListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BuildBroadcastListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BuildDataListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BuildDataListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BuildDataListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BuildDataListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BuildDataListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BuildDataListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BuildRarListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BuildRarListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BuildRarListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BuildRarListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BuildRarListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BuildRarListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BwPart_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BwPart_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BwPart_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BwPart_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BwPart_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BwPart_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ByteTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ByteTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagListIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagListIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagListIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagListIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::CallbackBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3CallbackBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3CallbackBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3CallbackBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::CqiConfig_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CqiConfig_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CqiConfig_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3CqiConfig_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3CqiConfig_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3CqiConfig_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::CqiListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CqiListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CqiListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3CqiListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3CqiListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3CqiListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DataRate' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DataRate_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DataRate");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DataRate_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DataRate_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DataRate_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DlDciListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DlDciListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DlDciListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DlDciListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DlDciListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DlDciListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DlInfoListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DlInfoListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DlInfoListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DlInfoListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DlInfoListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DlInfoListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DrxConfig_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DrxConfig_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DrxConfig_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DrxConfig_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DrxConfig_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DrxConfig_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::EpsBearer' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EpsBearer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EpsBearer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3EpsBearer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3EpsBearer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3EpsBearer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::EutranMeasurementMapping' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EutranMeasurementMapping_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EutranMeasurementMapping");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3EutranMeasurementMapping_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3EutranMeasurementMapping_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3EutranMeasurementMapping_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::EventId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EventId_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EventId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3EventId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3EventId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3EventId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::GbrQosInformation' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3GbrQosInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "GbrQosInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3GbrQosInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3GbrQosInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3GbrQosInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::HarqProcessInfoElement_t' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3HarqProcessInfoElement_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "HarqProcessInfoElement_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3HarqProcessInfoElement_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3HarqProcessInfoElement_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3HarqProcessInfoElement_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Hasher' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Hasher_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hasher");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Hasher_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Hasher_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Hasher_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::HigherLayerSelected_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3HigherLayerSelected_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "HigherLayerSelected_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3HigherLayerSelected_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3HigherLayerSelected_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3HigherLayerSelected_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ImsiLcidPair_t' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ImsiLcidPair_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ImsiLcidPair_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ImsiLcidPair_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ImsiLcidPair_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ImsiLcidPair_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Inet6SocketAddress' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Inet6SocketAddress_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Inet6SocketAddress");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Inet6SocketAddress_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Inet6SocketAddress_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Inet6SocketAddress_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::InetSocketAddress' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3InetSocketAddress_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "InetSocketAddress");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3InetSocketAddress_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3InetSocketAddress_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3InetSocketAddress_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4InterfaceAddress' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4InterfaceAddress_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4InterfaceAddress");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4InterfaceAddress_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4InterfaceAddress_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4InterfaceAddress_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Mask' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Mask_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Mask");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4Mask_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Mask_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Mask_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv6Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Prefix' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6Prefix_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6Prefix");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv6Prefix_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Prefix_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Prefix_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LogComponent' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LogComponent_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LogComponent");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LogComponent_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LogComponent_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LogComponent_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LogicalChannelConfigListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LogicalChannelConfigListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LogicalChannelConfigListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LogicalChannelConfigListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LogicalChannelConfigListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LogicalChannelConfigListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteFfConverter' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteFfConverter_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteFfConverter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteFfConverter_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteFfConverter_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteFfConverter_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteFlowId_t' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteFlowId_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteFlowId_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteFlowId_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteFlowId_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteFlowId_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSap_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteRrcSap");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSap_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSap_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSap_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::AntennaInfoDedicated' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapAntennaInfoDedicated_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AntennaInfoDedicated");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapAntennaInfoDedicated_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapAntennaInfoDedicated_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapAntennaInfoDedicated_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::AsConfig' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapAsConfig_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AsConfig");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapAsConfig_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapAsConfig_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapAsConfig_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::BlackCellsToAddMod' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapBlackCellsToAddMod_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BlackCellsToAddMod");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapBlackCellsToAddMod_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapBlackCellsToAddMod_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapBlackCellsToAddMod_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::CarrierBandwidthEutra' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapCarrierBandwidthEutra_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CarrierBandwidthEutra");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapCarrierBandwidthEutra_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapCarrierBandwidthEutra_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapCarrierBandwidthEutra_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::CarrierFreqEutra' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapCarrierFreqEutra_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CarrierFreqEutra");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapCarrierFreqEutra_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapCarrierFreqEutra_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapCarrierFreqEutra_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::CellAccessRelatedInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapCellAccessRelatedInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CellAccessRelatedInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapCellAccessRelatedInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapCellAccessRelatedInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapCellAccessRelatedInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::CellSelectionInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapCellSelectionInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CellSelectionInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapCellSelectionInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapCellSelectionInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapCellSelectionInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::CellsToAddMod' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapCellsToAddMod_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CellsToAddMod");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapCellsToAddMod_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapCellsToAddMod_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapCellsToAddMod_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::CgiInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapCgiInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CgiInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapCgiInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapCgiInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapCgiInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::DrbToAddMod' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapDrbToAddMod_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DrbToAddMod");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapDrbToAddMod_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapDrbToAddMod_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapDrbToAddMod_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::FreqInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapFreqInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "FreqInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapFreqInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapFreqInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapFreqInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::HandoverPreparationInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapHandoverPreparationInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "HandoverPreparationInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapHandoverPreparationInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapHandoverPreparationInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapHandoverPreparationInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::LogicalChannelConfig' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapLogicalChannelConfig_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LogicalChannelConfig");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapLogicalChannelConfig_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapLogicalChannelConfig_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapLogicalChannelConfig_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MasterInformationBlock' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMasterInformationBlock_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MasterInformationBlock");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMasterInformationBlock_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMasterInformationBlock_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMasterInformationBlock_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasConfig' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasConfig_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasConfig");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasConfig_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasConfig_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasConfig_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasGapConfig' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasGapConfig_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasGapConfig");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasGapConfig_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasGapConfig_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasGapConfig_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasIdToAddMod' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasIdToAddMod_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasIdToAddMod");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasIdToAddMod_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasIdToAddMod_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasIdToAddMod_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasObjectEutra' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasObjectEutra_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasObjectEutra");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasObjectEutra_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasObjectEutra_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasObjectEutra_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasObjectToAddMod' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasObjectToAddMod_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasObjectToAddMod");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasObjectToAddMod_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasObjectToAddMod_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasObjectToAddMod_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasResultEutra' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasResultEutra_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasResultEutra");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasResultEutra_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasResultEutra_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasResultEutra_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasResults' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasResults_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasResults");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasResults_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasResults_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasResults_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MeasurementReport' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMeasurementReport_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MeasurementReport");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMeasurementReport_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMeasurementReport_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMeasurementReport_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MobilityControlInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMobilityControlInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MobilityControlInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMobilityControlInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMobilityControlInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMobilityControlInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::MobilityStateParameters' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapMobilityStateParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MobilityStateParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapMobilityStateParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapMobilityStateParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapMobilityStateParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::PdschConfigCommon' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapPdschConfigCommon_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PdschConfigCommon");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapPdschConfigCommon_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapPdschConfigCommon_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapPdschConfigCommon_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::PdschConfigDedicated' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapPdschConfigDedicated_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PdschConfigDedicated");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapPdschConfigDedicated_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapPdschConfigDedicated_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapPdschConfigDedicated_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::PhysCellIdRange' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapPhysCellIdRange_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PhysCellIdRange");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapPhysCellIdRange_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapPhysCellIdRange_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapPhysCellIdRange_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::PhysicalConfigDedicated' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapPhysicalConfigDedicated_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PhysicalConfigDedicated");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapPhysicalConfigDedicated_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapPhysicalConfigDedicated_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapPhysicalConfigDedicated_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::PlmnIdentityInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapPlmnIdentityInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PlmnIdentityInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapPlmnIdentityInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapPlmnIdentityInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapPlmnIdentityInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::PreambleInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapPreambleInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PreambleInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapPreambleInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapPreambleInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapPreambleInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::QuantityConfig' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapQuantityConfig_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "QuantityConfig");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapQuantityConfig_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapQuantityConfig_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapQuantityConfig_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RaSupervisionInfo' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRaSupervisionInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RaSupervisionInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRaSupervisionInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRaSupervisionInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRaSupervisionInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RachConfigCommon' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRachConfigCommon_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RachConfigCommon");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRachConfigCommon_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRachConfigCommon_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRachConfigCommon_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RachConfigDedicated' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRachConfigDedicated_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RachConfigDedicated");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRachConfigDedicated_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRachConfigDedicated_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRachConfigDedicated_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RadioResourceConfigCommon' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRadioResourceConfigCommon_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RadioResourceConfigCommon");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRadioResourceConfigCommon_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRadioResourceConfigCommon_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRadioResourceConfigCommon_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RadioResourceConfigCommonSib' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRadioResourceConfigCommonSib_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RadioResourceConfigCommonSib");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRadioResourceConfigCommonSib_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRadioResourceConfigCommonSib_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRadioResourceConfigCommonSib_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RadioResourceConfigDedicated' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRadioResourceConfigDedicated_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RadioResourceConfigDedicated");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRadioResourceConfigDedicated_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRadioResourceConfigDedicated_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRadioResourceConfigDedicated_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::ReestabUeIdentity' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapReestabUeIdentity_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ReestabUeIdentity");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapReestabUeIdentity_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapReestabUeIdentity_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapReestabUeIdentity_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::ReportConfigEutra' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapReportConfigEutra_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ReportConfigEutra");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapReportConfigEutra_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapReportConfigEutra_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapReportConfigEutra_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::ReportConfigToAddMod' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapReportConfigToAddMod_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ReportConfigToAddMod");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapReportConfigToAddMod_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapReportConfigToAddMod_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapReportConfigToAddMod_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RlcConfig' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRlcConfig_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RlcConfig");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRlcConfig_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRlcConfig_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRlcConfig_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionReconfiguration' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionReconfiguration_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionReconfiguration");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionReconfiguration_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionReconfiguration_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionReconfiguration_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionReconfigurationCompleted' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionReconfigurationCompleted_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionReconfigurationCompleted");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionReconfigurationCompleted_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionReconfigurationCompleted_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionReconfigurationCompleted_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionReestablishment' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionReestablishment_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionReestablishment");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionReestablishment_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionReestablishment_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionReestablishment_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionReestablishmentComplete' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionReestablishmentComplete_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionReestablishmentComplete");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionReestablishmentComplete_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionReestablishmentComplete_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionReestablishmentComplete_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionReestablishmentReject' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionReestablishmentReject_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionReestablishmentReject");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionReestablishmentReject_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionReestablishmentReject_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionReestablishmentReject_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionReestablishmentRequest' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionReestablishmentRequest_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionReestablishmentRequest");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionReestablishmentRequest_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionReestablishmentRequest_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionReestablishmentRequest_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionReject' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionReject_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionReject");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionReject_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionReject_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionReject_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionRelease' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionRelease_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionRelease");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionRelease_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionRelease_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionRelease_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionRequest' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionRequest_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionRequest");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionRequest_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionRequest_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionRequest_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionSetup' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionSetup_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionSetup");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionSetup_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionSetup_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionSetup_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::RrcConnectionSetupCompleted' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapRrcConnectionSetupCompleted_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RrcConnectionSetupCompleted");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapRrcConnectionSetupCompleted_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapRrcConnectionSetupCompleted_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapRrcConnectionSetupCompleted_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SoundingRsUlConfigCommon' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSoundingRsUlConfigCommon_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SoundingRsUlConfigCommon");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSoundingRsUlConfigCommon_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSoundingRsUlConfigCommon_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSoundingRsUlConfigCommon_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SoundingRsUlConfigDedicated' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSoundingRsUlConfigDedicated_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SoundingRsUlConfigDedicated");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSoundingRsUlConfigDedicated_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSoundingRsUlConfigDedicated_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSoundingRsUlConfigDedicated_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SpeedStatePars' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSpeedStatePars_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpeedStatePars");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSpeedStatePars_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSpeedStatePars_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSpeedStatePars_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SpeedStateScaleFactors' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSpeedStateScaleFactors_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpeedStateScaleFactors");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSpeedStateScaleFactors_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSpeedStateScaleFactors_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSpeedStateScaleFactors_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SrbToAddMod' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSrbToAddMod_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SrbToAddMod");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSrbToAddMod_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSrbToAddMod_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSrbToAddMod_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SystemInformation' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSystemInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SystemInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSystemInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSystemInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSystemInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SystemInformationBlockType1' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSystemInformationBlockType1_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SystemInformationBlockType1");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSystemInformationBlockType1_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSystemInformationBlockType1_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSystemInformationBlockType1_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::SystemInformationBlockType2' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapSystemInformationBlockType2_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SystemInformationBlockType2");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapSystemInformationBlockType2_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapSystemInformationBlockType2_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapSystemInformationBlockType2_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteRrcSap::ThresholdEutra' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteRrcSapThresholdEutra_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ThresholdEutra");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteRrcSapThresholdEutra_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteRrcSapThresholdEutra_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteRrcSapThresholdEutra_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteUeConfig_t' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteUeConfig_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteUeConfig_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteUeConfig_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteUeConfig_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteUeConfig_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteUeRrcSapProvider' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteUeRrcSapProvider_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteUeRrcSapProvider");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteUeRrcSapProvider::CompleteSetupParameters' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteUeRrcSapProviderCompleteSetupParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CompleteSetupParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteUeRrcSapProviderCompleteSetupParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteUeRrcSapProviderCompleteSetupParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteUeRrcSapProviderCompleteSetupParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteUeRrcSapUser' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteUeRrcSapUser_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteUeRrcSapUser");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteUeRrcSapUser::SetupParameters' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteUeRrcSapUserSetupParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SetupParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteUeRrcSapUserSetupParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteUeRrcSapUserSetupParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteUeRrcSapUserSetupParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Mac48Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Mac48Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Mac48Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Mac48Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::MacCeListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MacCeListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MacCeListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3MacCeListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3MacCeListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3MacCeListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::MacCeValue_u' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MacCeValue_u_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MacCeValue_u");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3MacCeValue_u_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3MacCeValue_u_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3MacCeValue_u_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NodeContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NodeContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NodeContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3NodeContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NodeContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NodeContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NodeList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NodeList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NodeList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3NodeList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NodeList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NodeList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectDeleter' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectDeleter_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectDeleter_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectDeleter_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectFactory' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactory_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactory");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectFactory_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectFactory_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectFactory_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadata_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketMetadata");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadata_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadata_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadata_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadataItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadataItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::ItemIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadataItemIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ItemIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadataItemIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList::TagData' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagListTagData_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TagData");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagListTagData_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagListTagData_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagListTagData_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PagingInfoListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PagingInfoListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PagingInfoListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PagingInfoListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PagingInfoListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PagingInfoListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ParameterLogger' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ParameterLogger_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ParameterLogger");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ParameterLogger_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ParameterLogger_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ParameterLogger_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PhichListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PhichListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PhichListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PhichListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PhichListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PhichListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PhyReceptionStatParameters' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PhyReceptionStatParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PhyReceptionStatParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PhyReceptionStatParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PhyReceptionStatParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PhyReceptionStatParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PhyTransmissionStatParameters' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PhyTransmissionStatParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PhyTransmissionStatParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PhyTransmissionStatParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PhyTransmissionStatParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PhyTransmissionStatParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::RachListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RachListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RachListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3RachListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3RachListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3RachListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Rectangle' class from module 'ns.mobility' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.mobility");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Rectangle_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Rectangle");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Rectangle_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Rectangle_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Rectangle_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::RlcPduListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RlcPduListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RlcPduListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3RlcPduListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3RlcPduListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3RlcPduListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SbMeasResult_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SbMeasResult_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SbMeasResult_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SbMeasResult_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3SbMeasResult_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3SbMeasResult_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SiConfiguration_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SiConfiguration_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SiConfiguration_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SiConfiguration_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3SiConfiguration_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3SiConfiguration_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SiMessageListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SiMessageListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SiMessageListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SiMessageListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3SiMessageListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3SiMessageListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Simulator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Simulator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Simulator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Simulator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Simulator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Simulator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SpsConfig_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SpsConfig_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpsConfig_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SpsConfig_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3SpsConfig_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3SpsConfig_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SrConfig_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SrConfig_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SrConfig_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SrConfig_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3SrConfig_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3SrConfig_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SrListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SrListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SrListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SrListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3SrListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3SrListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Tag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Tag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Tag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TagBuffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TagBuffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TagBuffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TagBuffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TagBuffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TagBuffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Tap' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Tap_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Tap");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Tap_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Tap_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Tap_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TbId_t' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TbId_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TbId_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TbId_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TbId_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TbId_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TimeWithUnit' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TimeWithUnit_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TimeWithUnit");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TimeWithUnit_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TimeWithUnit_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TimeWithUnit_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TransmissionModesLayers' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TransmissionModesLayers_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TransmissionModesLayers");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TransmissionModesLayers_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TransmissionModesLayers_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TransmissionModesLayers_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeId_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::AttributeInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdAttributeInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeIdAttributeInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::TraceSourceInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdTraceSourceInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TraceSourceInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeIdTraceSourceInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UanModesList' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanModesList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanModesList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UanModesList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UanModesList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UanModesList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UanPacketArrival' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPacketArrival_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPacketArrival");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UanPacketArrival_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UanPacketArrival_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UanPacketArrival_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UanPdp' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPdp_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPdp");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UanPdp_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UanPdp_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UanPdp_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UanPhyListener' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyListener_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyListener");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UanPhyListener_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UanPhyListener_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UanPhyListener_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UanTxMode' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanTxMode_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanTxMode");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UanTxMode_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UanTxMode_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UanTxMode_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UanTxModeFactory' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanTxModeFactory_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanTxModeFactory");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UanTxModeFactory_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UanTxModeFactory_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UanTxModeFactory_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UeCapabilities_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UeCapabilities_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UeCapabilities_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UeCapabilities_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UeCapabilities_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UeCapabilities_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UeSelected_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UeSelected_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UeSelected_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UeSelected_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UeSelected_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UeSelected_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UlCqi_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UlCqi_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UlCqi_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UlCqi_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UlCqi_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UlCqi_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UlDciListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UlDciListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UlDciListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UlDciListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UlDciListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UlDciListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UlGrant_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UlGrant_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UlGrant_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UlGrant_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UlGrant_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UlGrant_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::UlInfoListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UlInfoListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UlInfoListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3UlInfoListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3UlInfoListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3UlInfoListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Vector2D' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Vector2D_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Vector2D");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Vector2D_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Vector2D_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Vector2D_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Vector3D' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Vector3D_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Vector3D");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Vector3D_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Vector3D_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Vector3D_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::VendorSpecificListElement_s' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3VendorSpecificListElement_s_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "VendorSpecificListElement_s");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3VendorSpecificListElement_s_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3VendorSpecificListElement_s_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3VendorSpecificListElement_s_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::empty' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Empty_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Empty_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Empty_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::int64x64_t' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Int64x64_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "int64x64_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Int64x64_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Int64x64_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Int64x64_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::tbInfo_t' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TbInfo_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "tbInfo_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TbInfo_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TbInfo_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TbInfo_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Chunk' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Chunk_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Chunk");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Header' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Header_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Header");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4Header' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Header_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Header");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteEnbRrcSapProvider' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteEnbRrcSapProvider_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteEnbRrcSapProvider");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteEnbRrcSapProvider::CompleteSetupUeParameters' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteEnbRrcSapProviderCompleteSetupUeParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CompleteSetupUeParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteEnbRrcSapProviderCompleteSetupUeParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteEnbRrcSapProviderCompleteSetupUeParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteEnbRrcSapProviderCompleteSetupUeParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::LteEnbRrcSapUser' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteEnbRrcSapUser_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteEnbRrcSapUser");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteEnbRrcSapUser::SetupUeParameters' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteEnbRrcSapUserSetupUeParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SetupUeParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3LteEnbRrcSapUserSetupUeParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3LteEnbRrcSapUserSetupUeParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3LteEnbRrcSapUserSetupUeParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Object' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Object_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Object");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Object::AggregateIterator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectAggregateIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AggregateIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectAggregateIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectAggregateIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectAggregateIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketBurst' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketBurst_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketBurst");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RandomVariableStream' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RandomVariableStream_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RandomVariableStream");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SequentialRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SequentialRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SequentialRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::LteControlMessage, ns3::empty, ns3::DefaultDeleter<ns3::LteControlMessage> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::LteControlMessage, ns3::empty, ns3::DefaultDeleter<ns3::LteControlMessage> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3LteControlMessage_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteControlMessage__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::LteHarqPhy, ns3::empty, ns3::DefaultDeleter<ns3::LteHarqPhy> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3LteHarqPhy_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteHarqPhy__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3LteHarqPhy_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteHarqPhy__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::LteHarqPhy, ns3::empty, ns3::DefaultDeleter<ns3::LteHarqPhy> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3LteHarqPhy_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteHarqPhy__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3LteHarqPhy_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteHarqPhy__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3LteHarqPhy_Ns3Empty_Ns3DefaultDeleter__lt__ns3LteHarqPhy__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::SpectrumModel, ns3::empty, ns3::DefaultDeleter<ns3::SpectrumModel> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::SpectrumModel, ns3::empty, ns3::DefaultDeleter<ns3::SpectrumModel> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3SpectrumModel_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumModel__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::SpectrumSignalParameters, ns3::empty, ns3::DefaultDeleter<ns3::SpectrumSignalParameters> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3SpectrumSignalParameters_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumSignalParameters__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3SpectrumSignalParameters_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumSignalParameters__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::SpectrumSignalParameters, ns3::empty, ns3::DefaultDeleter<ns3::SpectrumSignalParameters> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3SpectrumSignalParameters_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumSignalParameters__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3SpectrumSignalParameters_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumSignalParameters__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3SpectrumSignalParameters_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumSignalParameters__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::SpectrumValue, ns3::empty, ns3::DefaultDeleter<ns3::SpectrumValue> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::SpectrumValue, ns3::empty, ns3::DefaultDeleter<ns3::SpectrumValue> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3SpectrumValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3SpectrumValue__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::VendorSpecificValue, ns3::empty, ns3::DefaultDeleter<ns3::VendorSpecificValue> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3VendorSpecificValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3VendorSpecificValue__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3VendorSpecificValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3VendorSpecificValue__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::VendorSpecificValue, ns3::empty, ns3::DefaultDeleter<ns3::VendorSpecificValue> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3VendorSpecificValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3VendorSpecificValue__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3VendorSpecificValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3VendorSpecificValue__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3VendorSpecificValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3VendorSpecificValue__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Socket' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Socket_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Socket");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketAddressTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketAddressTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketAddressTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpTosTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpTosTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpTosTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpTtlTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpTtlTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpTtlTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpv6HopLimitTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpv6HopLimitTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpv6HopLimitTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpv6TclassTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpv6TclassTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpv6TclassTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketSetDontFragmentTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketSetDontFragmentTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketSetDontFragmentTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SpectrumInterference' class from module 'ns.spectrum' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.spectrum");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SpectrumInterference_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpectrumInterference");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SpectrumModel' class from module 'ns.spectrum' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.spectrum");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SpectrumModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpectrumModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SpectrumPhy' class from module 'ns.spectrum' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.spectrum");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SpectrumPhy_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpectrumPhy");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SpectrumSignalParameters' class from module 'ns.spectrum' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.spectrum");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SpectrumSignalParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpectrumSignalParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SpectrumValue' class from module 'ns.spectrum' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.spectrum");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SpectrumValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpectrumValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Time' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Time_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Time");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Time_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Time_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Time_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TraceSourceAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TraceSourceAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TraceSourceAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Trailer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Trailer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Trailer");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TriangularRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TriangularRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TriangularRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanMac' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanMac_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanMac");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhy' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhy_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhy");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhyCalcSinr' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyCalcSinr_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyCalcSinr");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhyCalcSinrDefault' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyCalcSinrDefault_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyCalcSinrDefault");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhyCalcSinrFhFsk' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyCalcSinrFhFsk_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyCalcSinrFhFsk");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhyGen' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyGen_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyGen");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhyPer' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyPer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyPer");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhyPerGenDefault' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyPerGenDefault_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyPerGenDefault");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPhyPerUmodem' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPhyPerUmodem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPhyPerUmodem");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanPropModel' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanPropModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanPropModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanTransducer' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanTransducer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanTransducer");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UniformRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UniformRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UniformRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::VendorSpecificValue' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3VendorSpecificValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "VendorSpecificValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WeibullRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WeibullRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WeibullRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ZetaRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ZetaRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ZetaRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ZipfRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ZipfRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ZipfRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImplBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImplBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImplBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Channel' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Channel_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Channel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ConstantRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ConstantRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ConstantRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DataRateChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DataRateChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DataRateChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DataRateValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DataRateValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DataRateValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DeterministicRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DeterministicRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DeterministicRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DeviceEnergyModel' class from module 'ns.energy' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.energy");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DeviceEnergyModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DeviceEnergyModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmpiricalRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EmpiricalRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EmpiricalRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmptyAttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EmptyAttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EmptyAttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ErlangRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ErlangRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ErlangRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EventImpl' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EventImpl_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EventImpl");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ExponentialRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ExponentialRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ExponentialRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::GammaRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3GammaRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "GammaRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4L3Protocol' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4L3Protocol_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4L3Protocol");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MaskChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MaskChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MaskValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MaskValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MulticastRoute' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MulticastRoute_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MulticastRoute");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4Route' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Route_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Route");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4RoutingProtocol' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4RoutingProtocol_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4RoutingProtocol");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6PrefixChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6PrefixChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6PrefixValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6PrefixValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LogNormalRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LogNormalRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LogNormalRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteHarqPhy' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteHarqPhy_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteHarqPhy");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteInterference' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteInterference_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteInterference");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LtePhy' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LtePhy_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LtePhy");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteSpectrumPhy' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteSpectrumPhy_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteSpectrumPhy");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MibLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MibLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MibLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MobilityModel' class from module 'ns.mobility' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.mobility");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MobilityModel_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MobilityModel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NetDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NetDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NetDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NixVector' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NixVector_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NixVector");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Node' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Node_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Node");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NormalRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NormalRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NormalRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactoryChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactoryChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactoryValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactoryValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::OutputStreamWrapper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3OutputStreamWrapper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "OutputStreamWrapper");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Packet' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Packet_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Packet");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ParetoRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ParetoRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ParetoRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RachPreambleLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RachPreambleLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RachPreambleLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RarLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RarLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RarLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RarLteControlMessage::Rar' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RarLteControlMessageRar_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Rar");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3RarLteControlMessageRar_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3RarLteControlMessageRar_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3RarLteControlMessageRar_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::RectangleChecker' class from module 'ns.mobility' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.mobility");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RectangleChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RectangleChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RectangleValue' class from module 'ns.mobility' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.mobility");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RectangleValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RectangleValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Sib1LteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Sib1LteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Sib1LteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SpectrumChannel' class from module 'ns.spectrum' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.spectrum");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SpectrumChannel_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SpectrumChannel");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TimeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TimeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TimeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeIdChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeIdValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanModesListChecker' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanModesListChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanModesListChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UanModesListValue' class from module 'ns.uan' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.uan");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UanModesListValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UanModesListValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UintegerValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UintegerValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UintegerValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UlDciLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UlDciLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UlDciLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Vector2DChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Vector2DChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Vector2DChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Vector2DValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Vector2DValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Vector2DValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Vector3DChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Vector3DChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Vector3DChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Vector3DValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Vector3DValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Vector3DValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::BsrLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BsrLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BsrLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DlCqiLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DlCqiLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DlCqiLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DlDciLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DlDciLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DlDciLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DlHarqFeedbackLteControlMessage' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DlHarqFeedbackLteControlMessage_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DlHarqFeedbackLteControlMessage");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteNetDevice' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteNetDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteNetDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteUeNetDevice' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteUeNetDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteUeNetDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LteEnbNetDevice' class from module 'ns.lte' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.lte");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LteEnbNetDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LteEnbNetDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    PyModule_AddObject(m, (char *) "_PyNs3AnimationInterface_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3AnimationInterface_wrapper_registry, NULL));
    /* Register the 'ns3::AnimationInterface' class */
    if (PyType_Ready(&PyNs3AnimationInterface_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "AnimationInterface", (PyObject *) &PyNs3AnimationInterface_Type);
    /* Register the 'ns3::AnimByteTag' class */
    PyNs3AnimByteTag_Type.tp_base = &PyNs3Tag_Type;
    if (PyType_Ready(&PyNs3AnimByteTag_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "AnimByteTag", (PyObject *) &PyNs3AnimByteTag_Type);
    /* Register the 'std::vector< ns3::CeBitmap_e >' class */
    if (PyType_Ready(&Pystd__vector__lt___ns3__CeBitmap_e___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__CeBitmap_e___gt__", (PyObject *) &Pystd__vector__lt___ns3__CeBitmap_e___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__CeBitmap_e___gt__Iter", (PyObject *) &Pystd__vector__lt___ns3__CeBitmap_e___gt__Iter_Type);
    /* Register the 'std::vector< unsigned char >' class */
    if (PyType_Ready(&Pystd__vector__lt___unsigned_char___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___unsigned_char___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___unsigned_char___gt__", (PyObject *) &Pystd__vector__lt___unsigned_char___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___unsigned_char___gt__Iter", (PyObject *) &Pystd__vector__lt___unsigned_char___gt__Iter_Type);
    /* Register the 'std::vector< unsigned short >' class */
    if (PyType_Ready(&Pystd__vector__lt___unsigned_short___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___unsigned_short___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___unsigned_short___gt__", (PyObject *) &Pystd__vector__lt___unsigned_short___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___unsigned_short___gt__Iter", (PyObject *) &Pystd__vector__lt___unsigned_short___gt__Iter_Type);
    /* Register the 'std::vector< ns3::DlInfoListElement_s::HarqStatus_e >' class */
    if (PyType_Ready(&Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__", (PyObject *) &Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter", (PyObject *) &Pystd__vector__lt___ns3__DlInfoListElement_s__HarqStatus_e___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::SrbToAddMod >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__SrbToAddMod___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::DrbToAddMod >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__DrbToAddMod___gt__Iter_Type);
    /* Register the 'std::list< unsigned char >' class */
    if (PyType_Ready(&Pystd__list__lt___unsigned_char___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___unsigned_char___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___unsigned_char___gt__", (PyObject *) &Pystd__list__lt___unsigned_char___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___unsigned_char___gt__Iter", (PyObject *) &Pystd__list__lt___unsigned_char___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::CellsToAddMod >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__CellsToAddMod___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::BlackCellsToAddMod >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__BlackCellsToAddMod___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::MeasObjectToAddMod >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__MeasObjectToAddMod___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::ReportConfigToAddMod >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__ReportConfigToAddMod___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::MeasIdToAddMod >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__MeasIdToAddMod___gt__Iter_Type);
    /* Register the 'std::list< unsigned int >' class */
    if (PyType_Ready(&Pystd__list__lt___unsigned_int___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___unsigned_int___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___unsigned_int___gt__", (PyObject *) &Pystd__list__lt___unsigned_int___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___unsigned_int___gt__Iter", (PyObject *) &Pystd__list__lt___unsigned_int___gt__Iter_Type);
    /* Register the 'std::list< ns3::LteRrcSap::MeasResultEutra >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__LteRrcSap__MeasResultEutra___gt__Iter_Type);
    /* Register the 'std::vector< ns3::HigherLayerSelected_s >' class */
    if (PyType_Ready(&Pystd__vector__lt___ns3__HigherLayerSelected_s___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__HigherLayerSelected_s___gt__", (PyObject *) &Pystd__vector__lt___ns3__HigherLayerSelected_s___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__HigherLayerSelected_s___gt__Iter", (PyObject *) &Pystd__vector__lt___ns3__HigherLayerSelected_s___gt__Iter_Type);
    /* Register the 'std::vector< ns3::SiMessageListElement_s >' class */
    if (PyType_Ready(&Pystd__vector__lt___ns3__SiMessageListElement_s___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__SiMessageListElement_s___gt__", (PyObject *) &Pystd__vector__lt___ns3__SiMessageListElement_s___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__SiMessageListElement_s___gt__Iter", (PyObject *) &Pystd__vector__lt___ns3__SiMessageListElement_s___gt__Iter_Type);
    /* Register the 'std::vector< ns3::Tap >' class */
    if (PyType_Ready(&Pystd__vector__lt___ns3__Tap___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___ns3__Tap___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__Tap___gt__", (PyObject *) &Pystd__vector__lt___ns3__Tap___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__Tap___gt__Iter", (PyObject *) &Pystd__vector__lt___ns3__Tap___gt__Iter_Type);
    /* Register the 'std::vector< double >' class */
    if (PyType_Ready(&Pystd__vector__lt___double___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___double___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___double___gt__", (PyObject *) &Pystd__vector__lt___double___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___double___gt__Iter", (PyObject *) &Pystd__vector__lt___double___gt__Iter_Type);
    /* Register the 'std::vector< int >' class */
    if (PyType_Ready(&Pystd__vector__lt___int___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___int___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___int___gt__", (PyObject *) &Pystd__vector__lt___int___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___int___gt__Iter", (PyObject *) &Pystd__vector__lt___int___gt__Iter_Type);
    /* Register the 'std::list< ns3::Ptr< ns3::Packet > >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__Packet___gt_____gt__Iter_Type);
    /* Register the 'ns3::Bands' class */
    if (PyType_Ready(&Pyns3__Bands_Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pyns3__BandsIter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Ns3__Bands", (PyObject *) &Pyns3__Bands_Type);
    PyModule_AddObject(m, (char *) "Ns3__BandsIter", (PyObject *) &Pyns3__BandsIter_Type);
    /* Register the 'std::list< ns3::UanPacketArrival >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__UanPacketArrival___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__UanPacketArrival___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__UanPacketArrival___gt__", (PyObject *) &Pystd__list__lt___ns3__UanPacketArrival___gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__UanPacketArrival___gt__Iter", (PyObject *) &Pystd__list__lt___ns3__UanPacketArrival___gt__Iter_Type);
    /* Register the 'std::list< ns3::Ptr< ns3::UanPhy > >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__UanPhy___gt_____gt__Iter_Type);
    /* Register the 'std::map< unsigned int, unsigned int >' class */
    if (PyType_Ready(&Pystd__map__lt___unsigned_int__unsigned_int___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__map__lt___unsigned_int__unsigned_int___gt__", (PyObject *) &Pystd__map__lt___unsigned_int__unsigned_int___gt___Type);
    PyModule_AddObject(m, (char *) "Std__map__lt___unsigned_int__unsigned_int___gt__Iter", (PyObject *) &Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type);
    /* Register the 'ns3::HarqProcessInfoList_t' class */
    if (PyType_Ready(&Pyns3__HarqProcessInfoList_t_Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pyns3__HarqProcessInfoList_tIter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Ns3__HarqProcessInfoList_t", (PyObject *) &Pyns3__HarqProcessInfoList_t_Type);
    PyModule_AddObject(m, (char *) "Ns3__HarqProcessInfoList_tIter", (PyObject *) &Pyns3__HarqProcessInfoList_tIter_Type);
    /* Register the 'std::list< ns3::Ptr< ns3::LteControlMessage > >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__LteControlMessage___gt_____gt__Iter_Type);
    PyModule_AddObject(m, (char *) "Vector", (PyObject *) &PyNs3Vector3D_Type);
    PyModule_AddObject(m, (char *) "VectorValue", (PyObject *) &PyNs3Vector3DValue_Type);
    PyModule_AddObject(m, (char *) "VectorChecker", (PyObject *) &PyNs3Vector3DChecker_Type);
    {
        PyObject *tmp_value;
         // ns3::AnimationInterface::UINT32_COUNTER
        tmp_value = PyLong_FromLong(ns3::AnimationInterface::UINT32_COUNTER);
        PyDict_SetItemString((PyObject*) PyNs3AnimationInterface_Type.tp_dict, "UINT32_COUNTER", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::AnimationInterface::DOUBLE_COUNTER
        tmp_value = PyLong_FromLong(ns3::AnimationInterface::DOUBLE_COUNTER);
        PyDict_SetItemString((PyObject*) PyNs3AnimationInterface_Type.tp_dict, "DOUBLE_COUNTER", tmp_value);
        Py_DECREF(tmp_value);
    }
    submodule = initnetanim_Config();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "Config", submodule);
    submodule = initnetanim_FatalImpl();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "FatalImpl", submodule);
    submodule = initnetanim_Hash();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "Hash", submodule);
    submodule = initnetanim_internal();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "internal", submodule);
    return MOD_RETURN(m);
}
