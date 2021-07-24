<div id="problem-body">
    <div class="col-md-12">
        <section id="description" class="problem-section">
            <div class="headline">
                <h2>문제</h2>
            </div>
            <div id="problem_description" class="problem-text">
                <p>
                    정수를 저장하는&nbsp;스택을 구현한 다음, 입력으로 주어지는
                    명령을 처리하는 프로그램을 작성하시오.
                </p>
                <p>명령은 총 다섯 가지이다.</p>
                <ul>
                    <li>push X: 정수 X를 스택에 넣는 연산이다.</li>
                    <li>
                        pop: 스택에서 가장 위에 있는&nbsp;정수를 빼고, 그 수를
                        출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을
                        출력한다.
                    </li>
                    <li>size: 스택에 들어있는 정수의 개수를 출력한다.</li>
                    <li>empty: 스택이 비어있으면 1, 아니면 0을 출력한다.</li>
                    <li>
                        top: 스택의 가장 위에 있는 정수를 출력한다.&nbsp;만약
                        스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
                    </li>
                </ul>
            </div>
        </section>
    </div>
    <div class="col-md-12">
        <section id="input" class="problem-section">
            <div class="headline">
                <h2>입력</h2>
            </div>
            <div id="problem_input" class="problem-text">
                <p>
                    첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이
                    주어진다.&nbsp;둘째 줄부터 N개의 줄에는 명령이 하나씩
                    주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다
                    작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는
                    없다.
                </p>
            </div>
        </section>
    </div>
    <div class="col-md-12">
        <section id="output" class="problem-section">
            <div class="headline">
                <h2>출력</h2>
            </div>
            <div id="problem_output" class="problem-text">
                <p>
                    출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
                </p>
            </div>
        </section>
    </div>
    <div class="col-md-12">
        <section id="limit" style="display: none" class="problem-section">
            <div class="headline">
                <h2>제한</h2>
            </div>
            <div id="problem_limit" class="problem-text"></div>
        </section>
    </div>
    <div class="col-md-12">
        <div class="row">
            <div class="col-md-6">
                <section id="sampleinput1">
                    <div class="headline">
                        <h2>
                            예제 입력 1
                        </h2>
                    </div>
                    <pre class="sampledata" id="sample-input-1">
14
push 1
push 2
top
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
top
</pre
                    >
                </section>
            </div>
            <div class="col-md-6">
                <section id="sampleoutput1">
                    <div class="headline">
                        <h2>
                            예제 출력 1
                        </h2>
                    </div>
                    <pre class="sampledata" id="sample-output-1">
2
2
0
2
1
-1
0
1
-1
0
3
</pre
                    >
                </section>
            </div>
        </div>
    </div>
    <div class="col-md-12">
        <div class="row">
            <div class="col-md-6">
                <section id="sampleinput2">
                    <div class="headline">
                        <h2>
                            예제 입력 2
                        </h2>
                    </div>
                    <pre class="sampledata" id="sample-input-2">
7
pop
top
push 123
top
pop
top
pop
</pre
                    >
                </section>
            </div>
            <div class="col-md-6">
                <section id="sampleoutput2">
                    <div class="headline">
                        <h2>
                            예제 출력 2
                        </h2>
                    </div>
                    <pre class="sampledata" id="sample-output-2">
-1
-1
123
123
-1
-1
</pre
                    >
                </section>
            </div>
        </div>
    </div>
    <div class="col-md-12">
        <section id="hint" style="display: none" class="problem-section">
            <div class="headline">
                <h2>힌트</h2>
            </div>
            <div id="problem_hint" class="problem-text"></div>
        </section>
    </div>
</div>
<h3>문제 : https://www.acmicpc.net/problem/10828</h3>
