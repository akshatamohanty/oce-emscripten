
// Bindings utilities

function WrapperObject() {
}
WrapperObject.prototype = Object.create(WrapperObject.prototype);
WrapperObject.prototype.constructor = WrapperObject;
WrapperObject.prototype.__class__ = WrapperObject;
WrapperObject.__cache__ = {};
Module['WrapperObject'] = WrapperObject;

function getCache(__class__) {
  return (__class__ || WrapperObject).__cache__;
}
Module['getCache'] = getCache;

function wrapPointer(ptr, __class__) {
  var cache = getCache(__class__);
  var ret = cache[ptr];
  if (ret) return ret;
  ret = Object.create((__class__ || WrapperObject).prototype);
  ret.ptr = ptr;
  return cache[ptr] = ret;
}
Module['wrapPointer'] = wrapPointer;

function castObject(obj, __class__) {
  return wrapPointer(obj.ptr, __class__);
}
Module['castObject'] = castObject;

Module['NULL'] = wrapPointer(0);

function destroy(obj) {
  if (!obj['__destroy__']) throw 'Error: Cannot destroy object. (Did you create it yourself?)';
  obj['__destroy__']();
  // Remove from cache, so the object can be GC'd and refs added onto it released
  delete getCache(obj.__class__)[obj.ptr];
}
Module['destroy'] = destroy;

function compare(obj1, obj2) {
  return obj1.ptr === obj2.ptr;
}
Module['compare'] = compare;

function getPointer(obj) {
  return obj.ptr;
}
Module['getPointer'] = getPointer;

function getClass(obj) {
  return obj.__class__;
}
Module['getClass'] = getClass;

// Converts big (string or array) values into a C-style storage, in temporary space

var ensureCache = {
  buffer: 0,  // the main buffer of temporary storage
  size: 0,   // the size of buffer
  pos: 0,    // the next free offset in buffer
  temps: [], // extra allocations
  needed: 0, // the total size we need next time

  prepare: function() {
    if (this.needed) {
      // clear the temps
      for (var i = 0; i < this.temps.length; i++) {
        Module['_free'](this.temps[i]);
      }
      this.temps.length = 0;
      // prepare to allocate a bigger buffer
      Module['_free'](this.buffer);
      this.buffer = 0;
      this.size += this.needed;
      // clean up
      this.needed = 0;
    }
    if (!this.buffer) { // happens first time, or when we need to grow
      this.size += 128; // heuristic, avoid many small grow events
      this.buffer = Module['_malloc'](this.size);
      assert(this.buffer);
    }
    this.pos = 0;
  },
  alloc: function(array, view) {
    assert(this.buffer);
    var bytes = view.BYTES_PER_ELEMENT;
    var len = array.length * bytes;
    len = (len + 7) & -8; // keep things aligned to 8 byte boundaries
    var ret;
    if (this.pos + len >= this.size) {
      // we failed to allocate in the buffer, this time around :(
      assert(len > 0); // null terminator, at least
      this.needed += len;
      ret = Module['_malloc'](len);
      this.temps.push(ret);
    } else {
      // we can allocate in the buffer
      ret = this.buffer + this.pos;
      this.pos += len;
    }
    var retShifted = ret;
    switch (bytes) {
      case 2: retShifted >>= 1; break;
      case 4: retShifted >>= 2; break;
      case 8: retShifted >>= 3; break;
    }
    for (var i = 0; i < array.length; i++) {
      view[retShifted + i] = array[i];
    }
    return ret;
  },
};

function ensureString(value) {
  if (typeof value === 'string') return ensureCache.alloc(intArrayFromString(value), HEAP8);
  return value;
}
function ensureInt8(value) {
  if (typeof value === 'object') return ensureCache.alloc(value, HEAP8);
  return value;
}
function ensureInt16(value) {
  if (typeof value === 'object') return ensureCache.alloc(value, HEAP16);
  return value;
}
function ensureInt32(value) {
  if (typeof value === 'object') return ensureCache.alloc(value, HEAP32);
  return value;
}
function ensureFloat32(value) {
  if (typeof value === 'object') return ensureCache.alloc(value, HEAPF32);
  return value;
}
function ensureFloat64(value) {
  if (typeof value === 'object') return ensureCache.alloc(value, HEAPF64);
  return value;
}


// Topology
function Topology() { throw "cannot construct a Topology, no constructor in IDL" }
Topology.prototype = Object.create(WrapperObject.prototype);
Topology.prototype.constructor = Topology;
Topology.prototype.__class__ = Topology;
Topology.__cache__ = {};
Module['Topology'] = Topology;

Topology.prototype['visualize'] = Topology.prototype.visualize = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_Topology_visualize_0(self), TopoDS_Shape);
};;

  Topology.prototype['__destroy__'] = Topology.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_Topology___destroy___0(self);
};
// T_Face
function T_Face(arg0) {
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg0 === undefined) { this.ptr = _emscripten_bind_T_Face_T_Face_0(); getCache(T_Face)[this.ptr] = this;return }
  this.ptr = _emscripten_bind_T_Face_T_Face_1(arg0);
  getCache(T_Face)[this.ptr] = this;
};;
T_Face.prototype = Object.create(Topology.prototype);
T_Face.prototype.constructor = T_Face;
T_Face.prototype.__class__ = T_Face;
T_Face.__cache__ = {};
Module['T_Face'] = T_Face;

T_Face.prototype['extrude'] = T_Face.prototype.extrude = function(arg0, arg1, arg2) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg1 && typeof arg1 === 'object') arg1 = arg1.ptr;
  if (arg2 && typeof arg2 === 'object') arg2 = arg2.ptr;
  return wrapPointer(_emscripten_bind_T_Face_extrude_3(self, arg0, arg1, arg2), T_Solid);
};;

T_Face.prototype['getNativeFace'] = T_Face.prototype.getNativeFace = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_T_Face_getNativeFace_0(self), TopoDS_Face);
};;

T_Face.prototype['visualize'] = T_Face.prototype.visualize = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_T_Face_visualize_0(self), TopoDS_Shape);
};;

  T_Face.prototype['__destroy__'] = T_Face.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_T_Face___destroy___0(self);
};
// T_Vertex
function T_Vertex(arg0, arg1, arg2) {
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg1 && typeof arg1 === 'object') arg1 = arg1.ptr;
  if (arg2 && typeof arg2 === 'object') arg2 = arg2.ptr;
  if (arg0 === undefined) { this.ptr = _emscripten_bind_T_Vertex_T_Vertex_0(); getCache(T_Vertex)[this.ptr] = this;return }
  if (arg1 === undefined) { this.ptr = _emscripten_bind_T_Vertex_T_Vertex_1(arg0); getCache(T_Vertex)[this.ptr] = this;return }
  if (arg2 === undefined) { this.ptr = _emscripten_bind_T_Vertex_T_Vertex_2(arg0, arg1); getCache(T_Vertex)[this.ptr] = this;return }
  this.ptr = _emscripten_bind_T_Vertex_T_Vertex_3(arg0, arg1, arg2);
  getCache(T_Vertex)[this.ptr] = this;
};;
T_Vertex.prototype = Object.create(Topology.prototype);
T_Vertex.prototype.constructor = T_Vertex;
T_Vertex.prototype.__class__ = T_Vertex;
T_Vertex.__cache__ = {};
Module['T_Vertex'] = T_Vertex;

T_Vertex.prototype['getNativePoint'] = T_Vertex.prototype.getNativePoint = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_T_Vertex_getNativePoint_0(self), gp_Pnt);
};;

T_Vertex.prototype['visualize'] = T_Vertex.prototype.visualize = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_T_Vertex_visualize_0(self), TopoDS_Shape);
};;

  T_Vertex.prototype['__destroy__'] = T_Vertex.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_T_Vertex___destroy___0(self);
};
// TopoDS_Face
function TopoDS_Face() { throw "cannot construct a TopoDS_Face, no constructor in IDL" }
TopoDS_Face.prototype = Object.create(WrapperObject.prototype);
TopoDS_Face.prototype.constructor = TopoDS_Face;
TopoDS_Face.prototype.__class__ = TopoDS_Face;
TopoDS_Face.__cache__ = {};
Module['TopoDS_Face'] = TopoDS_Face;

  TopoDS_Face.prototype['__destroy__'] = TopoDS_Face.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_TopoDS_Face___destroy___0(self);
};
// T_Solid
function T_Solid(arg0) {
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg0 === undefined) { this.ptr = _emscripten_bind_T_Solid_T_Solid_0(); getCache(T_Solid)[this.ptr] = this;return }
  this.ptr = _emscripten_bind_T_Solid_T_Solid_1(arg0);
  getCache(T_Solid)[this.ptr] = this;
};;
T_Solid.prototype = Object.create(WrapperObject.prototype);
T_Solid.prototype.constructor = T_Solid;
T_Solid.prototype.__class__ = T_Solid;
T_Solid.__cache__ = {};
Module['T_Solid'] = T_Solid;

T_Solid.prototype['booleanOp'] = T_Solid.prototype.booleanOp = function(arg0) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  return wrapPointer(_emscripten_bind_T_Solid_booleanOp_1(self, arg0), TopoDS_Shape);
};;

T_Solid.prototype['getNativeSolid'] = T_Solid.prototype.getNativeSolid = function() {
  var self = this.ptr;
  return wrapPointer(_emscripten_bind_T_Solid_getNativeSolid_0(self), TopoDS_Shape);
};;

  T_Solid.prototype['__destroy__'] = T_Solid.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_T_Solid___destroy___0(self);
};
// TopoDS_Shape
function TopoDS_Shape() { throw "cannot construct a TopoDS_Shape, no constructor in IDL" }
TopoDS_Shape.prototype = Object.create(WrapperObject.prototype);
TopoDS_Shape.prototype.constructor = TopoDS_Shape;
TopoDS_Shape.prototype.__class__ = TopoDS_Shape;
TopoDS_Shape.__cache__ = {};
Module['TopoDS_Shape'] = TopoDS_Shape;

  TopoDS_Shape.prototype['__destroy__'] = TopoDS_Shape.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_TopoDS_Shape___destroy___0(self);
};
// Mobius
function Mobius() {
  this.ptr = _emscripten_bind_Mobius_Mobius_0();
  getCache(Mobius)[this.ptr] = this;
};;
Mobius.prototype = Object.create(WrapperObject.prototype);
Mobius.prototype.constructor = Mobius;
Mobius.prototype.__class__ = Mobius;
Mobius.__cache__ = {};
Module['Mobius'] = Mobius;

Mobius.prototype['MakePolygon'] = Mobius.prototype.MakePolygon = function(arg0, arg1, arg2, arg3) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg1 && typeof arg1 === 'object') arg1 = arg1.ptr;
  if (arg2 && typeof arg2 === 'object') arg2 = arg2.ptr;
  if (arg3 && typeof arg3 === 'object') arg3 = arg3.ptr;
  return wrapPointer(_emscripten_bind_Mobius_MakePolygon_4(self, arg0, arg1, arg2, arg3), T_Face);
};;

Mobius.prototype['MakeBox'] = Mobius.prototype.MakeBox = function(arg0, arg1, arg2) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg1 && typeof arg1 === 'object') arg1 = arg1.ptr;
  if (arg2 && typeof arg2 === 'object') arg2 = arg2.ptr;
  return wrapPointer(_emscripten_bind_Mobius_MakeBox_3(self, arg0, arg1, arg2), T_Solid);
};;

Mobius.prototype['MakeCylinder'] = Mobius.prototype.MakeCylinder = function(arg0, arg1) {
  var self = this.ptr;
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg1 && typeof arg1 === 'object') arg1 = arg1.ptr;
  return wrapPointer(_emscripten_bind_Mobius_MakeCylinder_2(self, arg0, arg1), T_Solid);
};;

  Mobius.prototype['__destroy__'] = Mobius.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_Mobius___destroy___0(self);
};
// Tesselator
function Tesselator(arg0) {
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  this.ptr = _emscripten_bind_Tesselator_Tesselator_1(arg0);
  getCache(Tesselator)[this.ptr] = this;
};;
Tesselator.prototype = Object.create(WrapperObject.prototype);
Tesselator.prototype.constructor = Tesselator;
Tesselator.prototype.__class__ = Tesselator;
Tesselator.__cache__ = {};
Module['Tesselator'] = Tesselator;

Tesselator.prototype['ExportShapeToThreejs'] = Tesselator.prototype.ExportShapeToThreejs = function() {
  var self = this.ptr;
  return Pointer_stringify(_emscripten_bind_Tesselator_ExportShapeToThreejs_0(self));
};;

  Tesselator.prototype['__destroy__'] = Tesselator.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_Tesselator___destroy___0(self);
};
// gp_Pnt
function gp_Pnt() { throw "cannot construct a gp_Pnt, no constructor in IDL" }
gp_Pnt.prototype = Object.create(WrapperObject.prototype);
gp_Pnt.prototype.constructor = gp_Pnt;
gp_Pnt.prototype.__class__ = gp_Pnt;
gp_Pnt.__cache__ = {};
Module['gp_Pnt'] = gp_Pnt;

  gp_Pnt.prototype['__destroy__'] = gp_Pnt.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_gp_Pnt___destroy___0(self);
};
// BRepMesh_IncrementalMesh
function BRepMesh_IncrementalMesh(arg0, arg1) {
  if (arg0 && typeof arg0 === 'object') arg0 = arg0.ptr;
  if (arg1 && typeof arg1 === 'object') arg1 = arg1.ptr;
  this.ptr = _emscripten_bind_BRepMesh_IncrementalMesh_BRepMesh_IncrementalMesh_2(arg0, arg1);
  getCache(BRepMesh_IncrementalMesh)[this.ptr] = this;
};;
BRepMesh_IncrementalMesh.prototype = Object.create(WrapperObject.prototype);
BRepMesh_IncrementalMesh.prototype.constructor = BRepMesh_IncrementalMesh;
BRepMesh_IncrementalMesh.prototype.__class__ = BRepMesh_IncrementalMesh;
BRepMesh_IncrementalMesh.__cache__ = {};
Module['BRepMesh_IncrementalMesh'] = BRepMesh_IncrementalMesh;

  BRepMesh_IncrementalMesh.prototype['__destroy__'] = BRepMesh_IncrementalMesh.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_BRepMesh_IncrementalMesh___destroy___0(self);
};
// VoidPtr
function VoidPtr() { throw "cannot construct a VoidPtr, no constructor in IDL" }
VoidPtr.prototype = Object.create(WrapperObject.prototype);
VoidPtr.prototype.constructor = VoidPtr;
VoidPtr.prototype.__class__ = VoidPtr;
VoidPtr.__cache__ = {};
Module['VoidPtr'] = VoidPtr;

  VoidPtr.prototype['__destroy__'] = VoidPtr.prototype.__destroy__ = function() {
  var self = this.ptr;
  _emscripten_bind_VoidPtr___destroy___0(self);
};
(function() {
  function setupEnums() {
    
  }
  if (Module['calledRun']) setupEnums();
  else addOnPreMain(setupEnums);
})();
