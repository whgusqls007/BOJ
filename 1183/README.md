<div id="problem-body">
			<div class="col-md-12">
				<section id="description" class="problem-section">
				<div class="headline">
				<h2>문제</h2>
				</div>
				<div id="problem_description" class="problem-text">
				<p>캠프에는 두 그룹이 있다. 한 그룹은 오민식을 중심으로 모인 그룹이고, 또다른 그룹은 오영식을 중심으로 모인 그룹이다.</p>

<p>오민식 그룹에 있는 사람들은 오영식 그룹에 있는 사람들을 만나기로 약속했다. 오민식 그룹에 있는 각각의 사람들은 정확하게 한 명의 오영식 그룹의 사람들을 만나야 한다. 이때, 오민식 그룹의 i번째 사람은 오영식 그룹의 i번째 사람을 만나야 한다.</p>

<p>불행하게도, 오민식 그룹의 사람들 중 몇 명은 만나기로 약속한 시간에 오영식 그룹의 사람을 만날 수 없다는 것을 알았다. 그들은 너무 빨리 도착하거나 너무 늦게 도착할 것이다.</p>

<p>기다리는 시간의 총 합을 최소화하기 위해서, 오민식 그룹의 사람들은 어떤 시간만큼 약속 시간을 늦추기로 했다. 총 기다리는 시간은 오민식 그룹의 사람이 오영식 그룹의 사람이 나타나기를 기다리는 시간과 오영식 그룹의 사람이 오민식 그룹의 사람이 나타나기를 기다리는 시간을 포함한다. 오영식 그룹의 사람은 조정된 약속 시간에 정확하게 나타날 것이다.</p>

<p>오민식 그룹의 사람이 오영식 그룹의 사람을 만나기로 한 원래 약속시간이 주어지고, 오민식 그룹의 사람이 도착하는 시간이 주어진다.</p>

<p>예를 들어, 오민식 그룹이 N명이고, 오민식 그룹의 원래 약속시간이 배열 S라고 하고, 도착하는 시간을 배열A이라고 하고, 약속을 T시간만큼 미뤘다면, 기다리는 시간의 총합은 abs(S[i]+T-A[i])를 모두 더한 값이 된다.</p>

<p>기다리는 시간의 합이 최소가 되는 T의 개수가 몇 개인지 구하는 프로그램을 작성하시오.&nbsp;T는 음수일 수도 있다.</p>
    			</div>
    			</section>
    		</div>
    									<div class="col-md-12">
    				<section id="input" class="problem-section">
    				<div class="headline">
    				<h2>입력</h2>
    				</div>
    				<div id="problem_input" class="problem-text">
    				<p>첫째 줄에 오민식 그룹의 사람 수 N이 주어진다. N은 10,000보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에는 각각의 오민식 그룹 사람의 원래 약속시간과 도착시간이 주어진다. 이 값은 10^9보다 작거나 같은 자연수이다.</p>
    				</div>
    				</section>
    			</div>
    			<div class="col-md-12">
    				<section id="output" class="problem-section">
    				<div class="headline">
    				<h2>출력</h2>
    				</div>
    				<div id="problem_output" class="problem-text">
    				<p>첫째 줄에 기다리는 시간의 합이 최소인 서로 다른 T의 개수를 출력한다.</p>
    				</div>
    				</section>
    			</div>
    					<div class="col-md-12">
    		<section id="limit" style="display:none;" class="problem-section">
    		<div class="headline">
    		<h2>제한</h2>
    		</div>
    		<div id="problem_limit" class="problem-text">
    					</div>
    		</section>
    		</div>
    																<div class="col-md-12">
    			<div class="row">
    				<div class="col-md-6">
    					<section id="sampleinput1">
    					<div class="headline">
    					<h2>예제 입력 1
    					</h2>
    					</div>
    					<pre class="sampledata" id="sample-input-1">1

10 9

</pre>
						</section>
					</div>
					<div class="col-md-6">
						<section id="sampleoutput1">
						<div class="headline">
						<h2>예제 출력 1
						</h2>
						</div>
						<pre class="sampledata" id="sample-output-1">1</pre>
						</section>
					</div>
									</div>
				</div>
										<div class="col-md-12">
				<section id="hint" class="problem-section">
				<div class="headline">
				<h2>힌트</h2>
				</div>
				<div id="problem_hint" class="problem-text">
				<p>오민식 그룹의 사람이 1시간 일찍 도착한다. 1시간 약속을 미루면 기다리는 시간의 값이 0이 된다.</p>
    			</div>
    			</section>
    		</div>
    							</div>
<h3>문제 : https://www.acmicpc.net/problem/1183</h3>
