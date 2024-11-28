<h1>Typemaster CLI 🚀⌨️</h1>

<h2>What is Typemaster CLI ? </h2>
<p><strong>Typemaster CLI</strong> is an advanced typing speed trainer designed to challenge and improve your typing skills directly in the terminal. Built with <strong>C++</strong>, this program leverages <strong>advanced data structures</strong> and <strong>algorithmic techniques</strong> to make string matching and spell-checking faster and more efficient.</p>

<p>Whether you're looking to boost your <strong>typing speed</strong>, refine your <strong>accuracy</strong>, or <strong>optimize</strong> your typing workflow, Typemaster CLI has you covered. It supports multiple <strong>test modes</strong> to cater to your specific needs and is designed for <strong>high-performance typing practice</strong>. ⏱️</p>

<h2>🚀 Key Features:</h2>
<ul>
  <li><strong>Terminal-Based</strong>: No GUI required, works purely in the terminal. 💻</li>
  <li><strong>Advanced Algorithms</strong>: Utilizes <strong>Levenshtein Distance</strong>, <strong>Trie</strong>, <strong>Hashing</strong>, and <strong>String Matching</strong> algorithms to speed up the accuracy checks and make them more efficient. ⚡</li>
  <li><strong>Efficient Speed and Accuracy Measurement</strong>: Provides real-time feedback on your <strong>words per minute (WPM)</strong> and <strong>accuracy percentage</strong>. 📈</li>
  <li><strong>Multiple Test Modes</strong>: Choose from <strong>1-minute</strong>, <strong>30-second</strong>, or <strong>customized time</strong> tests. ⏳</li>
  <li><strong>Optimized Code</strong>: Built with <strong>C++</strong> for blazing-fast performance. 🚀</li>
</ul>

<h2>🎮 Test Modes:</h2>
<p>Typemaster CLI supports various test modes to suit your needs:</p>
<ul>
  <li><strong>1 Minute Test</strong>: Type as many words as you can in 1 minute! ⏱️</li>
  <li><strong>30 Seconds Test</strong>: A shorter, fast-paced typing challenge to test your skills in just 30 seconds. 🕒</li>
  <li><strong>Custom Test</strong>: Customize the test duration or number of words for a more tailored challenge. ⚙️</li>
</ul>

<p>These modes allow you to target different aspects of typing, whether it's speed, endurance, or accuracy.</p>

<h2>📊 Performance & Efficiency:</h2>
<p><strong>Typemaster CLI</strong> is optimized for <strong>speed</strong> and <strong>efficiency</strong>, thanks to the advanced algorithms it uses. Here's a breakdown of the improvements you’ll notice:</p>

<ul>
  <li><strong>Levenshtein Distance</strong>: The program uses this distance metric to measure the difference between the typed word and the dictionary word. By using an efficient algorithm for calculating the distance, it provides <strong>faster and more accurate spell-checking</strong>.
    <ul>
      <li><strong>Levenshtein Distance</strong> helps in calculating the minimum number of single-character edits (insertions, deletions, substitutions) needed to change one word into another. This makes the typing test much more responsive and faster when calculating accuracy in real-time. 🧠</li>
      <li>Using an optimized version of <strong>Levenshtein Distance</strong> reduces the time complexity, especially for large word lists, leading to <strong>faster matching</strong> and <strong>lower processing time</strong>.</li>
    </ul>
  </li>
  
  <li><strong>Trie</strong>: A <strong>Trie</strong> data structure is used for <strong>efficient word matching</strong> in the dictionary. This ensures that word lookups are <strong>extremely fast</strong>, making it possible to quickly check whether the user typed the correct word or not. 🔍</li>
  
  <li><strong>Hashing</strong>: Hashing is employed to store and retrieve words from the dictionary more quickly, speeding up the accuracy calculation during typing tests. It reduces lookup times significantly, enhancing the overall speed. ⚡</li>
  
  <li><strong>Efficiency</strong>: Written in <strong>C++</strong>, the program uses <strong>minimal resources</strong> and executes <strong>blazingly fast</strong> on most modern machines, capable of tracking typing speeds upwards of <strong>150 WPM</strong> with near-zero latency. 🏎️</li>
</ul>

<h2>🔥 Features At A Glance:</h2>
<ul>
  <li><strong>Typing Speed (WPM)</strong>: Tracks how fast you type during the test. ⏩</li>
  <li><strong>Accuracy (%)</strong>: Measures the accuracy of your typing in real-time. ✅</li>
  <li><strong>Advanced Algorithms</strong>: Utilizes <strong>Levenshtein Distance</strong>, <strong>Trie</strong>, and <strong>Hashing</strong> for fast and accurate word matching. 📚</li>
  <li><strong>Multiple Test Modes</strong>: Choose from <strong>time-based</strong> or <strong>word-based</strong> tests. ⏳</li>
  <li><strong>Custom Word Dictionaries</strong>: Supports customizable dictionaries for practice. 📖</li>
</ul>

<h3>Test Example:</h3>

<table>
  <thead>
    <tr>
      <th>Test Duration</th>
      <th>Words Typed</th>
      <th>Accuracy (%)</th>
      <th>Speed (WPM)</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>1 minute</td>
      <td>70</td>
      <td>95%</td>
      <td>70</td>
    </tr>
    <tr>
      <td>30 seconds</td>
      <td>40</td>
      <td>98%</td>
      <td>80</td>
    </tr>
  </tbody>
</table>

<h2>⚡️ How Fast Is It?</h2>
<ul>
  <li><strong>Levenshtein Distance</strong>: Reduces the complexity of string matching from <strong>O(n^2)</strong> to <strong>O(n)</strong>, making string comparison significantly faster. This results in a <strong>noticeable decrease in the processing time</strong> for accuracy checks.</li>
  <li><strong>Trie</strong> allows for <strong>O(m)</strong> time complexity for word matching, where <strong>m</strong> is the length of the word, making it extremely fast for large dictionaries.</li>
  <li>The program can achieve <strong>100-150 WPM</strong> speeds, with near-instant feedback on accuracy. 💨</li>
</ul>

<h2>🔧 How to Use:</h2>
<ol>
  <li><strong>Clone the repository</strong>:
    <pre><code>git clone https://github.com/SiddhantDeshwal1/TypeMaster_CLI </code></pre>
  </li>
  <li>Navigate to the project folder:
    <pre><code>cd TypeMaster_CLI/</code></pre>
  </li>
  <li>Run the build script:
    <pre><code>./build_and_run.sh  </code></pre>
  </li>
  <li>Choose your test mode: 1 minute, 30 seconds, or a custom duration.</li>
</ol>

<h2>🔥 Built with:</h2>
<ul>
  <li><strong>C++</strong> for high performance 🧑‍💻</li>
  <li><strong>Levenshtein Distance</strong> for fast and accurate string matching 📐</li>
  <li><strong>Trie and Hashing</strong> for efficient dictionary lookups 🏷️</li>
  <li><strong>Makefile</strong> for automated building ⚙️</li>
  <li><strong>Bash Script</strong> for easy automation 🚀</li>
</ul>

<h2>🛠️ Customize Your Experience:</h2>
<ul>
  <li>You can modify the dictionary for a custom set of words to practice.</li>
  <li>Tweak the test durations or word limits to match your goals.</li>
  <li>Edit the source code to add your own features or further optimize the performance!</li>
</ul>

<h2>📢 Contribute:</h2>
<p>Feel free to contribute to this project. Bug reports, feature requests, and pull requests are welcome!</p>

<ul>
  <li><strong>Bug Reports</strong>: Open an Issue</li>
  <li><strong>Feature Requests</strong>: Open an Issue</li>
  <li><strong>Pull Requests</strong>: Submit a Pull Request</li>
</ul>

<h2>🎯 Conclusion:</h2>
<p>Typemaster CLI is a powerful, fast, and efficient typing trainer that not only helps you improve your typing speed but also optimizes your workflow by offering real-time feedback and multiple customizable test modes. With the help of advanced algorithms and performance enhancements, Typemaster CLI is perfect for those who want to push their typing skills to the next level. 🚀</p>

<p>Happy Typing! ✨</p>
