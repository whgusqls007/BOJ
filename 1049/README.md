<div id="problem-body">
    <div class="col-md-12">
        <section id="description" class="problem-section">
            <div class="headline">
                <h2>문제</h2>
            </div>
            <div id="problem_description" class="problem-text">
                <p>
                    RGB거리에는 집이 N개 있다. 거리는 선분으로 나타낼 수 있고, 1번 집부터 N번 집이
                    순서대로&nbsp;있다.
                    <br/>
                    집은 빨강, 초록, 파랑 중 하나의 색으로 칠해야 한다. 각각의 집을 빨강, 초록,
                    파랑으로 칠하는 비용이 주어졌을 때, 아래 규칙을 만족하면서 모든 집을 칠하는
                    비용의 최솟값을 구해보자.
                </p>
                <ul>
                    <li>1번 집의 색은 2번 집의 색과 같지 않아야 한다.</li>
                    <li>N번 집의 색은 N-1번 집의 색과 같지 않아야 한다.</li>
                    <li>i(2 ≤ i ≤ N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.</li>
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
                    첫째 줄에 집의 수 N(2 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 각 집을
                    빨강, 초록, 파랑으로 칠하는 비용이 1번 집부터 한 줄에 하나씩 주어진다. 집을
                    칠하는 비용은 1,000보다 작거나 같은 자연수이다.
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
                <p>첫째 줄에 모든 집을 칠하는 비용의 최솟값을 출력한다.</p>
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
3
26 40 83
49 60 57
13 89 99
</pre>
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
96
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
<h3>문제 : https://www.acmicpc.net/problem/1149</h3>
