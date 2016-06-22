stage "Build"
 
node ('DockerHost'){
    docker.image('slave-gcc').inside {
        git 'https://github.com/jvelasquez/fibonacci-series.git'
        sh 'MAKE=$(which make) && cd c && $MAKE && cd ..'
        sh 'ls -ltarh c'
        stash includes: 'c/*.executable', name: 'build'
    }
}
 
stage "Test"
 
parallel (
    "Basic Test" : {
        node ('DockerHost'){
            docker.image('slave-gcc').inside {
                unstash 'build'
                sh 'ls -ltarh'
                sh 'c/fibonacci.executable 10'
            }
        }
    },
    "Complex Test 90" : {
        node ('DockerHost'){
            docker.image('slave-gcc').inside {
                unstash 'build'
                sh 'ls -ltarh'
                sh 'c/fibonacci.executable 90'
            }
        }
    }
)
 
stage "Staging"
input message: "Are you sure?"
