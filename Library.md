Library manual

 - 2020270103 임현성

=================


 ## List of Datastructure
  - Stack
  - Queue (LinkedList)
  - Double Linked List (DLL)
  - Graph (BFS)
  - Linked Binary Tree

<br>
<br>
<br>

  ## Stack
   ### ADT
   - SingleLinkedList 기반
   - 후입선출 ( Last in First out)
   - top을 통해서 한 방향으로만 입력과 출력을 할 수 있다.

   ### Variable
   - `sNode<T>* sTop` : 스택의 맨 윗 부분을 가리키고 있는 포인터
   - `int sSize` : 스택의 크기에 대한 정보를 가지고 있는 변수
   
   ### Operations
   - `Stack()` : 스택 생성자 - 생성시 크기는 0, sTop = null
   - `~Stack()` : 스택 소멸자 - 스택이 소멸할때 스택의 크기가 0이 될때까지 pop을 통해 생성된 모든 노드 삭제
   - `void push(T input)` : 임의의 변수를 가진 노드를 스택에 삽입, sTop은 삽입한 노드를 가리킨다.
   - `void pop()` : 가장 마지막에 삽입한 노드를 삭제, 스택이 비어있으면 assert를 통해 예외처리
   - `bool isEmpty()` : 스택이 비어있는지 확인, 비어있으면 true, 아니면 false반환
   - `int size()` : 스택의 크기를 반환
    - `T top()` : 가장 마지막에 삽입한 노드의 값 확인, 스택이 비어있으면 assert를 통해 예외처리

<br>
<br>
<br>

  ## Queue
   ### ADT
   - SingleLinkedList 기반
   - 임의의 변수를 삽입, 삭제 가능
   - 선입 선출 구조(fist in fisrt out)
   ### Variable
   - int qSize : 큐의 크기에 대한 정보를 가지고 있는 변수
   - qNode<T>* qfront; : 큐의 맨 앞 부분을 가리키고 있는 포인터
   - qNode<T>* qrear; : 큐의 맨 뒷 부분을 가리키고 있는 포인터
   ### Operations
   - `Queue()` : 스택 생성자 - 생성시 크기는 0, qfront = null, qrear = null
   - `~Queue()` : 스택 소멸자 - 스택이 소멸할때 스택의 크기가 0이 될때까지 pop을 통해 생성된 모든 노드 삭제
   - `void push(T input)` : 임의의 변수를 가진 노드를 큐에 삽입, qRear은 삽입한 노드를 가리킨다.
   - `void pop()` : 가장 마지막에 삽입한 노드를 삭제, 큐가 비어있으면 assert를 통해 예외처리, qFront 는 삭제된 노드 다음 삽입했던 노드를 가리킨다.
   - `bool isEmpty()` : 큐가 비어있는지 확인, 비어있으면 true, 아니면 false반환
   - `int size()` : 큐의 크기를 반환
   - `T rear()` : 가장 마지막에 삽입한 노드의 값 확인, 큐가 비어있으면 assert를 통해 예외처리
   - `T front()` : 가장 마지막에 삽입한 노드의 값 확인, 큐가 비어있으면 assert를 통해 예외처리
 <br>
 <br>
 <br>
 
 ## Double Linked List
  ### ADT
 - 노드(데이터를 저장하는 부분과 다음, 이전 노드의 주소를 가리키는 포인터 부분 존재)
 - 단일 연결 리스트와는 다르게 반복문으로 돌지 않아도 됨
 - 양방향 연결 리스트(노드가 앞뒤로 연결 되어 있다)
 ### Variable
 - `int _size` : DLL의 크기
 - `Node* back` : 리스트 맨 뒷 부분을 가리키는 포인터
 - `Node* front` : 리스트 맨 앞 부분을 가리키는 포인터
 
 ### Operations
 - `DLL()`: DLL 생성자
 - `~DLL()` : DLL 소멸자
 - `push_front(T input)` : 리스트 머리 노드에 데이터 삽입
 - `push_back(T input)` : 리스트 꼬리 노드에 데이터 삽입
 - `pop_front()` : 리스트 머리 부분 노드 삭제
 - `pop_back()` : 리스트 꼬리 부분 노드 삭제
 - `insert(int location, T input)` : 리스트 location번째 노드를 앞에 새로운 노드 삽입.
 - `erase(int location)` : 리스트 location에 위치한 데이터를 삭제합니다.
 - `T frontData()` : 제일 앞의 노드의 데이터 반환
 - `T backData()` : 제일 뒤의 노드의 데이터 반환
 - `Node<T>* getfront()` : 제일 앞의 노드
 - `Node<T>* getback()` : 제일 뒤의 노드
 - `bool isEmpty()` : List가 비어있는지 확인
 - `int size()` : List의 크기 반환
 - `print()` : 머리 노드를 한칸씩 움직여 데이터를 쭉 출력하고, 다시 머리로 복귀


 <br>
 <br>
 <br>
 
 ## Graph
  ### ADT
 - 인접행렬을 이용한 그래프
 - 정점(노드)끼리 연결되어 있는 간선의 여부를 0과 1로 표현
 - 간선의 여부는 2차원 배열에 저장되며 간선에 방향성이 존재한다.
 ### Variable
 - `int size` : 정점의 개수
 - `int Node[10]` : 노드의 값
 - `int Matrix[10][10]` : 간선의 존재 여부를 확인하는 2차원 배열
 - `int visited[50]` : 방문한 노드를 확인하기 위한 배열 (BFS)
 
 ### Operations
 - `Graph()`: Graph 생성자
 - `~Graph()` : Graph 소멸자
 - `int getSize()` : 그래프의 사이즈를 반환하는 함수
 - `int stateEdge(int x, int y)` : 두 정점 사이의 간선 유무를 반환
 - `void setEdge_name(int x)` : 노드에 값을 넣는 함수
 - `void setEdge(int x, int y)` : 두 정점 사이를 간선으로 잇는 함수
 - `void resetEdge(int x, int y)` : 모든 노드와 간선을 0으로 초기화 하는 함수
 - `void bfs(Graph* graph)` : 큐를 이용하여 너비우선탐색을 진행하고 결과를 출력하는 함수

  <br>
 <br>
 <br>
 
 ## Linked Binary Tree
  ### ADT
 - 각각의 노드가 최대 두개의 자식 노드를 가지는 트리를 링크 구조를 이용해 구현한 자료구조
 - 외부의 노드를 트리에 추가한다

 ### Variable
 - `data` : 노드의 값에 해당하는 변수
 - `lNode* left` : 자식 노드의 왼쪽 노드
 - `lNode* right` : 자식 노드의 오른쪽 노드
 - `lNode* parent` : 부모 노드
 - `lNode* v` : 노드의 주소를 가리키는 변수
 - `lNode* _root` : 가장 위에 있는 노드
 - `int n` : 노드의 개수

 ### Operations
- `Position(Node* _v = NULL)`: 노드의 주소를 가리키는 v를 null로 초기화
- `int& operator*()`: v가 가리키는 값을 반환
- `Position left()`: 자식 노드의 왼쪽 노드의 Position을 반환
- `Position right()`: 자식 노드의 오른쪽 노드의 Position을 반환
- `Position parent()`: 부모 노드의 Position을 반환
- `bool isRoot()`: 부모노드가 존재하는지 알려줌
- `bool isExternal`: 외부 노드(자식 노드)가 존재하는지 알려줌
- `void print()`: 노드의 값을 출력
- `int size()`: 크기를 반환
- `bool empty()`: 크기가 0인지 확인하고 반환
- `Position root()`: root의 Position을 반환
- `PositionList position`: 새로운 트리에 전위연산을 진행하고 반환하
- `void addRoot()`: Root에 노드를 할당
- `void expandExternal(constPosition& pl)`: 노드 v에 외부 노드(자식 노드)를 만들고 부모 노드를 v로 가르킨다
- `Position removeAboveExternal(const Position& p)`: 부모 노드와 자식 노드를 없애는 함수
- `void preorder(Node* v, PositionList& pl)`: 전위연산을 진행하는 함수