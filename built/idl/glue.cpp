
#include <emscripten.h>

extern "C" {

// Not using size_t for array indices as the values used by the javascript code are signed.
void array_bounds_check(const int array_size, const int array_idx) {
  if (array_idx < 0 || array_idx >= array_size) {
    EM_ASM_INT({
      throw 'Array index ' + $0 + ' out of bounds: [0,' + $1 + ')';
    }, array_idx, array_size);
  }
}

// Topology

TopoDS_Shape* EMSCRIPTEN_KEEPALIVE emscripten_bind_Topology_visualize_0(Topology* self) {
  return &self->visualize();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Topology___destroy___0(Topology* self) {
  delete self;
}

// T_Face

T_Face* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Face_T_Face_0() {
  return new T_Face();
}

T_Face* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Face_T_Face_1(TopoDS_Face* arg0) {
  return new T_Face(*arg0);
}

T_Solid* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Face_extrude_3(T_Face* self, double arg0, double arg1, double arg2) {
  return &self->extrude(arg0, arg1, arg2);
}

TopoDS_Face* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Face_getNativeFace_0(T_Face* self) {
  return &self->getNativeFace();
}

TopoDS_Shape* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Face_visualize_0(T_Face* self) {
  return &self->visualize();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Face___destroy___0(T_Face* self) {
  delete self;
}

// T_Vertex

T_Vertex* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Vertex_T_Vertex_0() {
  return new T_Vertex();
}

T_Vertex* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Vertex_T_Vertex_3(double arg0, double arg1, double arg2) {
  return new T_Vertex(arg0, arg1, arg2);
}

gp_Pnt* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Vertex_getNativePoint_0(T_Vertex* self) {
  return &self->getNativePoint();
}

TopoDS_Shape* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Vertex_visualize_0(T_Vertex* self) {
  return &self->visualize();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Vertex___destroy___0(T_Vertex* self) {
  delete self;
}

// TopoDS_Face

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TopoDS_Face___destroy___0(TopoDS_Face* self) {
  delete self;
}

// T_Solid

T_Solid* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Solid_T_Solid_0() {
  return new T_Solid();
}

T_Solid* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Solid_T_Solid_1(TopoDS_Shape* arg0) {
  return new T_Solid(*arg0);
}

TopoDS_Shape* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Solid_booleanOp_1(T_Solid* self, T_Solid* arg0) {
  return &self->booleanOp(*arg0);
}

TopoDS_Shape* EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Solid_getNativeSolid_0(T_Solid* self) {
  return &self->getNativeSolid();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_T_Solid___destroy___0(T_Solid* self) {
  delete self;
}

// TopoDS_Shape

void EMSCRIPTEN_KEEPALIVE emscripten_bind_TopoDS_Shape___destroy___0(TopoDS_Shape* self) {
  delete self;
}

// Mobius

Mobius* EMSCRIPTEN_KEEPALIVE emscripten_bind_Mobius_Mobius_0() {
  return new Mobius();
}

T_Face* EMSCRIPTEN_KEEPALIVE emscripten_bind_Mobius_MakePolygon_4(Mobius* self, T_Vertex* arg0, T_Vertex* arg1, T_Vertex* arg2, T_Vertex* arg3) {
  return &self->MakePolygon(*arg0, *arg1, *arg2, *arg3);
}

T_Solid* EMSCRIPTEN_KEEPALIVE emscripten_bind_Mobius_MakeBox_3(Mobius* self, double arg0, double arg1, double arg2) {
  return &self->MakeBox(arg0, arg1, arg2);
}

T_Solid* EMSCRIPTEN_KEEPALIVE emscripten_bind_Mobius_MakeCylinder_2(Mobius* self, double arg0, double arg1) {
  return &self->MakeCylinder(arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Mobius___destroy___0(Mobius* self) {
  delete self;
}

// Tesselator

Tesselator* EMSCRIPTEN_KEEPALIVE emscripten_bind_Tesselator_Tesselator_1(TopoDS_Shape* arg0) {
  return new Tesselator(*arg0);
}

char* EMSCRIPTEN_KEEPALIVE emscripten_bind_Tesselator_ExportShapeToThreejs_0(Tesselator* self) {
  return self->ExportShapeToThreejs();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Tesselator___destroy___0(Tesselator* self) {
  delete self;
}

// gp_Pnt

void EMSCRIPTEN_KEEPALIVE emscripten_bind_gp_Pnt___destroy___0(gp_Pnt* self) {
  delete self;
}

// BRepMesh_IncrementalMesh

BRepMesh_IncrementalMesh* EMSCRIPTEN_KEEPALIVE emscripten_bind_BRepMesh_IncrementalMesh_BRepMesh_IncrementalMesh_2(TopoDS_Shape* arg0, double arg1) {
  return new BRepMesh_IncrementalMesh(*arg0, arg1);
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_BRepMesh_IncrementalMesh___destroy___0(BRepMesh_IncrementalMesh* self) {
  delete self;
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

}

