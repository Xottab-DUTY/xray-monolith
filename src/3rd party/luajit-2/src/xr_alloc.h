#ifndef _XR_POOL_H
#define _XR_POOL_H

// � �������� x64 ���� � luajit`�� - ��-�� ����, ��� ������� ���������� ��������� ������ �� ������� �������,
// �� ������� �������� ������� �� ����� �������� ������, ��� ��� ��� ��� ������ ��� ������ ������� ����.
// ��� ������� �������� �������� ������� ����� ������(128��) � ������ ���� � ���� ��� ���������� �������� ��������

void XR_INIT();
void* XR_MMAP(size_t size);
void XR_DESTROY(void* p, size_t size);

#endif